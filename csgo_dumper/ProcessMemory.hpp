#pragma once

class ProcessMemory {
public:
    HANDLE m_Handle = nullptr;

    ~ProcessMemory() {
        if (m_Handle)
            CloseHandle(m_Handle);
    }

    ProcessMemory(HANDLE processHandle) : m_Handle(processHandle) {}

    template<typename T>
    bool Read(uintptr_t address, T* buffer, SIZE_T size = sizeof(T)) {
        return ReadProcessMemory(m_Handle, reinterpret_cast<void*>(address), buffer, size, nullptr);
    }

    template<typename T>
    bool Read(void* address, T* buffer, SIZE_T size = sizeof(T)) {
        return Read(reinterpret_cast<uintptr_t>(address), buffer, size);
    }

    bool ReadString(uintptr_t address, char* buffer, SIZE_T size) {

        char firstBytes[sizeof(uintptr_t)];
        if (!Read(address, &firstBytes, sizeof(firstBytes)))
            return false;

        if (firstBytes[0] > 0x7F || firstBytes[0] < 0x20) {
            uintptr_t stringPtr;
            if (!Read(address, &stringPtr))
                return false;

            return Read(stringPtr, buffer, size);
        }

        return Read(address, buffer, size);
    }

    bool GetModuleInfo(const char* moduleName, uintptr_t* baseAddress, uintptr_t* moduleSize) {
        HMODULE modules[1337];
        DWORD needed = 0;

        if (!K32EnumProcessModules(m_Handle, modules, sizeof(modules), &needed))
            return false;

        for (DWORD i = 0; i < needed / sizeof(HMODULE); ++i) {
            char moduleFileName[MAX_PATH] = { 0 };
            if (!K32GetModuleFileNameExA(m_Handle, modules[i], moduleFileName, sizeof(moduleFileName)))
                continue;

            if (strstr(moduleFileName, moduleName)) {
                MODULEINFO moduleInfo = { 0 };
                if (!K32GetModuleInformation(m_Handle, modules[i], &moduleInfo, sizeof(MODULEINFO)))
                    return false;

                *baseAddress = reinterpret_cast<uintptr_t>(moduleInfo.lpBaseOfDll);
                *moduleSize = static_cast<uintptr_t>(moduleInfo.SizeOfImage);
                return true;
            }
        }
        return false;
    }
};
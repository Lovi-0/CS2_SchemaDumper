#pragma once
#include <string>
#include <vector>
#include <cstdint>

namespace Memory {
    class PatternScanner {
    private:
        static uint8_t HexToByte(char c) {
            if (c >= '0' && c <= '9') return c - '0';
            if (c >= 'A' && c <= 'F') return c - 'A' + 10;
            if (c >= 'a' && c <= 'f') return c - 'a' + 10;
            return 0;
        }

        static uint8_t ParseByte(const char* hex) {
            return (HexToByte(hex[0]) << 4) | HexToByte(hex[1]);
        }

        static bool IsMatch(const uint8_t* address, const std::vector<uint8_t>& pattern,
            const std::vector<bool>& mask) {
            for (size_t i = 0; i < pattern.size(); ++i) {
                if (!mask[i] && address[i] != pattern[i]) {
                    return false;
                }
            }
            return true;
        }

    public:
        static uintptr_t FindSignature(uintptr_t baseAddress, size_t size, const std::string& signature){
            std::vector<uint8_t> pattern;
            std::vector<bool> mask;

            for (size_t i = 0; i < signature.length();) {
                if (signature[i] == ' ') {
                    ++i;
                    continue;
                }

                if (signature[i] == '?') {
                    pattern.push_back(0);
                    mask.push_back(true);
                    i += (i + 1 < signature.length() && signature[i + 1] == '?') ? 2 : 1;
                }
                else {
                    pattern.push_back(ParseByte(&signature[i]));
                    mask.push_back(false);
                    i += 2;
                }
            }

            for (size_t i = 0; i < size - pattern.size(); ++i) {
                if (IsMatch(reinterpret_cast<uint8_t*>(baseAddress + i), pattern, mask)) {
                    return baseAddress + i;
                }
            }

            return 0;
        }
    };
}
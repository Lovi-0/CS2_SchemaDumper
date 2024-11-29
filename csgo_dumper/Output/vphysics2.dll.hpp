namespace constraint_breakableparams_t
{
	constexpr uint32_t strength = 0x0;  // float32 
	constexpr uint32_t forceLimit = 0x4;  // float32 
	constexpr uint32_t torqueLimit = 0x8;  // float32 
	constexpr uint32_t bodyMassScale = 0xC;  // float32[2] 
	constexpr uint32_t isActive = 0x14;  // bool 
}

namespace constraint_axislimit_t
{
	constexpr uint32_t flMinRotation = 0x0;  // float32 
	constexpr uint32_t flMaxRotation = 0x4;  // float32 
	constexpr uint32_t flMotorTargetAngSpeed = 0x8;  // float32 
	constexpr uint32_t flMotorMaxTorque = 0xC;  // float32 
}

namespace constraint_hingeparams_t
{
	constexpr uint32_t worldPosition = 0x0;  // Vector 
	constexpr uint32_t worldAxisDirection = 0xC;  // Vector 
	constexpr uint32_t hingeAxis = 0x18;  // constraint_axislimit_t 
	constexpr uint32_t constraint = 0x28;  // constraint_breakableparams_t 
}

namespace IPhysicsPlayerController
{
}

namespace CFeJiggleBone
{
	constexpr uint32_t m_nFlags = 0x0;  // uint32 
	constexpr uint32_t m_flLength = 0x4;  // float32 
	constexpr uint32_t m_flTipMass = 0x8;  // float32 
	constexpr uint32_t m_flYawStiffness = 0xC;  // float32 
	constexpr uint32_t m_flYawDamping = 0x10;  // float32 
	constexpr uint32_t m_flPitchStiffness = 0x14;  // float32 
	constexpr uint32_t m_flPitchDamping = 0x18;  // float32 
	constexpr uint32_t m_flAlongStiffness = 0x1C;  // float32 
	constexpr uint32_t m_flAlongDamping = 0x20;  // float32 
	constexpr uint32_t m_flAngleLimit = 0x24;  // float32 
	constexpr uint32_t m_flMinYaw = 0x28;  // float32 
	constexpr uint32_t m_flMaxYaw = 0x2C;  // float32 
	constexpr uint32_t m_flYawFriction = 0x30;  // float32 
	constexpr uint32_t m_flYawBounce = 0x34;  // float32 
	constexpr uint32_t m_flMinPitch = 0x38;  // float32 
	constexpr uint32_t m_flMaxPitch = 0x3C;  // float32 
	constexpr uint32_t m_flPitchFriction = 0x40;  // float32 
	constexpr uint32_t m_flPitchBounce = 0x44;  // float32 
	constexpr uint32_t m_flBaseMass = 0x48;  // float32 
	constexpr uint32_t m_flBaseStiffness = 0x4C;  // float32 
	constexpr uint32_t m_flBaseDamping = 0x50;  // float32 
	constexpr uint32_t m_flBaseMinLeft = 0x54;  // float32 
	constexpr uint32_t m_flBaseMaxLeft = 0x58;  // float32 
	constexpr uint32_t m_flBaseLeftFriction = 0x5C;  // float32 
	constexpr uint32_t m_flBaseMinUp = 0x60;  // float32 
	constexpr uint32_t m_flBaseMaxUp = 0x64;  // float32 
	constexpr uint32_t m_flBaseUpFriction = 0x68;  // float32 
	constexpr uint32_t m_flBaseMinForward = 0x6C;  // float32 
	constexpr uint32_t m_flBaseMaxForward = 0x70;  // float32 
	constexpr uint32_t m_flBaseForwardFriction = 0x74;  // float32 
	constexpr uint32_t m_flRadius0 = 0x78;  // float32 
	constexpr uint32_t m_flRadius1 = 0x7C;  // float32 
	constexpr uint32_t m_vPoint0 = 0x80;  // Vector 
	constexpr uint32_t m_vPoint1 = 0x8C;  // Vector 
	constexpr uint32_t m_nCollisionMask = 0x98;  // uint16 
}

namespace CFeNamedJiggleBone
{
	constexpr uint32_t m_strParentBone = 0x0;  // CUtlString 
	constexpr uint32_t m_transform = 0x10;  // CTransform 
	constexpr uint32_t m_nJiggleParent = 0x30;  // uint32 
	constexpr uint32_t m_jiggleBone = 0x34;  // CFeJiggleBone 
}

namespace CFeIndexedJiggleBone
{
	constexpr uint32_t m_nNode = 0x0;  // uint32 
	constexpr uint32_t m_nJiggleParent = 0x4;  // uint32 
	constexpr uint32_t m_jiggleBone = 0x8;  // CFeJiggleBone 
}

namespace FeNodeBase_t
{
	constexpr uint32_t nNode = 0x0;  // uint16 
	constexpr uint32_t nDummy = 0x2;  // uint16[3] 
	constexpr uint32_t nNodeX0 = 0x8;  // uint16 
	constexpr uint32_t nNodeX1 = 0xA;  // uint16 
	constexpr uint32_t nNodeY0 = 0xC;  // uint16 
	constexpr uint32_t nNodeY1 = 0xE;  // uint16 
	constexpr uint32_t qAdjust = 0x10;  // QuaternionStorage 
}

namespace FeSimdNodeBase_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[4] 
	constexpr uint32_t nNodeX0 = 0x8;  // uint16[4] 
	constexpr uint32_t nNodeX1 = 0x10;  // uint16[4] 
	constexpr uint32_t nNodeY0 = 0x18;  // uint16[4] 
	constexpr uint32_t nNodeY1 = 0x20;  // uint16[4] 
	constexpr uint32_t nDummy = 0x28;  // uint16[4] 
	constexpr uint32_t qAdjust = 0x30;  // FourQuaternions 
}

namespace FeQuad_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[4] 
	constexpr uint32_t flSlack = 0x8;  // float32 
	constexpr uint32_t vShape = 0xC;  // Vector4D[4] 
}

namespace FeSimdQuad_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[4][4] 
	constexpr uint32_t f4Slack = 0x20;  // fltx4 
	constexpr uint32_t vShape = 0x30;  // FourVectors[4] 
	constexpr uint32_t f4Weights = 0xF0;  // fltx4[4] 
}

namespace FeSimdTri_t
{
	constexpr uint32_t nNode = 0x0;  // uint32[4][3] 
	constexpr uint32_t w1 = 0x30;  // fltx4 
	constexpr uint32_t w2 = 0x40;  // fltx4 
	constexpr uint32_t v1x = 0x50;  // fltx4 
	constexpr uint32_t v2 = 0x60;  // FourVectors2D 
}

namespace FeSimdRodConstraint_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[4][2] 
	constexpr uint32_t f4MaxDist = 0x10;  // fltx4 
	constexpr uint32_t f4MinDist = 0x20;  // fltx4 
	constexpr uint32_t f4Weight0 = 0x30;  // fltx4 
	constexpr uint32_t f4RelaxationFactor = 0x40;  // fltx4 
}

namespace FeSimdRodConstraintAnim_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[4][2] 
	constexpr uint32_t f4Weight0 = 0x10;  // fltx4 
	constexpr uint32_t f4RelaxationFactor = 0x20;  // fltx4 
}

namespace FeRodConstraint_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[2] 
	constexpr uint32_t flMaxDist = 0x4;  // float32 
	constexpr uint32_t flMinDist = 0x8;  // float32 
	constexpr uint32_t flWeight0 = 0xC;  // float32 
	constexpr uint32_t flRelaxationFactor = 0x10;  // float32 
}

namespace FeTwistConstraint_t
{
	constexpr uint32_t nNodeOrient = 0x0;  // uint16 
	constexpr uint32_t nNodeEnd = 0x2;  // uint16 
	constexpr uint32_t flTwistRelax = 0x4;  // float32 
	constexpr uint32_t flSwingRelax = 0x8;  // float32 
}

namespace FeHingeLimit_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[6] 
	constexpr uint32_t nFlags = 0xC;  // uint32 
	constexpr uint32_t flWeight4 = 0x10;  // float32 
	constexpr uint32_t flWeight5 = 0x14;  // float32 
	constexpr uint32_t flAngleCenter = 0x18;  // float32 
	constexpr uint32_t flAngleExtents = 0x1C;  // float32 
}

namespace FeAntiTunnelProbe_t
{
	constexpr uint32_t flWeight = 0x0;  // float32 
	constexpr uint32_t nFlags = 0x4;  // uint32 
	constexpr uint32_t nProbeNode = 0x8;  // uint16 
	constexpr uint32_t nCount = 0xA;  // uint16 
	constexpr uint32_t nBegin = 0xC;  // uint32 
	constexpr uint32_t flActivationDistance = 0x10;  // float32 
	constexpr uint32_t flCurvatureRadius = 0x14;  // float32 
	constexpr uint32_t flBias = 0x18;  // float32 
}

namespace FeAxialEdgeBend_t
{
	constexpr uint32_t te = 0x0;  // float32 
	constexpr uint32_t tv = 0x4;  // float32 
	constexpr uint32_t flDist = 0x8;  // float32 
	constexpr uint32_t flWeight = 0xC;  // float32[4] 
	constexpr uint32_t nNode = 0x1C;  // uint16[6] 
}

namespace FeCtrlOffset_t
{
	constexpr uint32_t vOffset = 0x0;  // Vector 
	constexpr uint32_t nCtrlParent = 0xC;  // uint16 
	constexpr uint32_t nCtrlChild = 0xE;  // uint16 
}

namespace FeCtrlOsOffset_t
{
	constexpr uint32_t nCtrlParent = 0x0;  // uint16 
	constexpr uint32_t nCtrlChild = 0x2;  // uint16 
}

namespace FeFollowNode_t
{
	constexpr uint32_t nParentNode = 0x0;  // uint16 
	constexpr uint32_t nChildNode = 0x2;  // uint16 
	constexpr uint32_t flWeight = 0x4;  // float32 
}

namespace FeCollisionPlane_t
{
	constexpr uint32_t nCtrlParent = 0x0;  // uint16 
	constexpr uint32_t nChildNode = 0x2;  // uint16 
	constexpr uint32_t m_Plane = 0x4;  // RnPlane_t 
	constexpr uint32_t flStrength = 0x14;  // float32 
}

namespace FeNodeIntegrator_t
{
	constexpr uint32_t flPointDamping = 0x0;  // float32 
	constexpr uint32_t flAnimationForceAttraction = 0x4;  // float32 
	constexpr uint32_t flAnimationVertexAttraction = 0x8;  // float32 
	constexpr uint32_t flGravity = 0xC;  // float32 
}

namespace FeSpringIntegrator_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[2] 
	constexpr uint32_t flSpringRestLength = 0x4;  // float32 
	constexpr uint32_t flSpringConstant = 0x8;  // float32 
	constexpr uint32_t flSpringDamping = 0xC;  // float32 
	constexpr uint32_t flNodeWeight0 = 0x10;  // float32 
}

namespace FeSimdSpringIntegrator_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[4][2] 
	constexpr uint32_t flSpringRestLength = 0x10;  // fltx4 
	constexpr uint32_t flSpringConstant = 0x20;  // fltx4 
	constexpr uint32_t flSpringDamping = 0x30;  // fltx4 
	constexpr uint32_t flNodeWeight0 = 0x40;  // fltx4 
}

namespace FeWorldCollisionParams_t
{
	constexpr uint32_t flWorldFriction = 0x0;  // float32 
	constexpr uint32_t flGroundFriction = 0x4;  // float32 
	constexpr uint32_t nListBegin = 0x8;  // uint16 
	constexpr uint32_t nListEnd = 0xA;  // uint16 
}

namespace FeTaperedCapsuleStretch_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[2] 
	constexpr uint32_t nCollisionMask = 0x4;  // uint16 
	constexpr uint32_t nDummy = 0x6;  // uint16 
	constexpr uint32_t flRadius = 0x8;  // float32[2] 
}

namespace FeTaperedCapsuleRigid_t
{
	constexpr uint32_t vSphere = 0x0;  // fltx4[2] 
	constexpr uint32_t nNode = 0x20;  // uint16 
	constexpr uint32_t nCollisionMask = 0x22;  // uint16 
	constexpr uint32_t nVertexMapIndex = 0x24;  // uint16 
	constexpr uint32_t nFlags = 0x26;  // uint16 
}

namespace FeSphereRigid_t
{
	constexpr uint32_t vSphere = 0x0;  // fltx4 
	constexpr uint32_t nNode = 0x10;  // uint16 
	constexpr uint32_t nCollisionMask = 0x12;  // uint16 
	constexpr uint32_t nVertexMapIndex = 0x14;  // uint16 
	constexpr uint32_t nFlags = 0x16;  // uint16 
}

namespace FeTreeChildren_t
{
	constexpr uint32_t nChild = 0x0;  // uint16[2] 
}

namespace FeFitMatrix_t
{
	constexpr uint32_t bone = 0x0;  // CTransform 
	constexpr uint32_t vCenter = 0x20;  // Vector 
	constexpr uint32_t nEnd = 0x2C;  // uint16 
	constexpr uint32_t nNode = 0x2E;  // uint16 
	constexpr uint32_t nBeginDynamic = 0x30;  // uint16 
}

namespace FeFitWeight_t
{
	constexpr uint32_t flWeight = 0x0;  // float32 
	constexpr uint32_t nNode = 0x4;  // uint16 
	constexpr uint32_t nDummy = 0x6;  // uint16 
}

namespace FeNodeReverseOffset_t
{
	constexpr uint32_t vOffset = 0x0;  // Vector 
	constexpr uint32_t nBoneCtrl = 0xC;  // uint16 
	constexpr uint32_t nTargetNode = 0xE;  // uint16 
}

namespace FeAnimStrayRadius_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[2] 
	constexpr uint32_t flMaxDist = 0x4;  // float32 
	constexpr uint32_t flRelaxationFactor = 0x8;  // float32 
}

namespace FeSimdAnimStrayRadius_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[4][2] 
	constexpr uint32_t flMaxDist = 0x10;  // fltx4 
	constexpr uint32_t flRelaxationFactor = 0x20;  // fltx4 
}

namespace FeKelagerBend2_t
{
	constexpr uint32_t flWeight = 0x0;  // float32[3] 
	constexpr uint32_t flHeight0 = 0xC;  // float32 
	constexpr uint32_t nNode = 0x10;  // uint16[3] 
	constexpr uint32_t nReserved = 0x16;  // uint16 
}

namespace FeCtrlSoftOffset_t
{
	constexpr uint32_t nCtrlParent = 0x0;  // uint16 
	constexpr uint32_t nCtrlChild = 0x2;  // uint16 
	constexpr uint32_t vOffset = 0x4;  // Vector 
	constexpr uint32_t flAlpha = 0x10;  // float32 
}

namespace FeTri_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[3] 
	constexpr uint32_t w1 = 0x8;  // float32 
	constexpr uint32_t w2 = 0xC;  // float32 
	constexpr uint32_t v1x = 0x10;  // float32 
	constexpr uint32_t v2 = 0x14;  // Vector2D 
}

namespace FeSDFRigid_t
{
	constexpr uint32_t vLocalMin = 0x0;  // Vector 
	constexpr uint32_t vLocalMax = 0xC;  // Vector 
	constexpr uint32_t flBounciness = 0x18;  // float32 
	constexpr uint32_t nNode = 0x1C;  // uint16 
	constexpr uint32_t nCollisionMask = 0x1E;  // uint16 
	constexpr uint32_t nVertexMapIndex = 0x20;  // uint16 
	constexpr uint32_t nFlags = 0x22;  // uint16 
	constexpr uint32_t m_Distances = 0x28;  // CUtlVector< float32 > 
	constexpr uint32_t m_nWidth = 0x40;  // int32 
	constexpr uint32_t m_nHeight = 0x44;  // int32 
	constexpr uint32_t m_nDepth = 0x48;  // int32 
}

namespace FeBoxRigid_t
{
	constexpr uint32_t tmFrame2 = 0x0;  // CTransform 
	constexpr uint32_t nNode = 0x20;  // uint16 
	constexpr uint32_t nCollisionMask = 0x22;  // uint16 
	constexpr uint32_t vSize = 0x24;  // Vector 
	constexpr uint32_t nVertexMapIndex = 0x30;  // uint16 
	constexpr uint32_t nFlags = 0x32;  // uint16 
}

namespace FeRigidColliderIndices_t
{
	constexpr uint32_t m_nTaperedCapsuleRigidIndex = 0x0;  // uint16 
	constexpr uint32_t m_nSphereRigidIndex = 0x2;  // uint16 
	constexpr uint32_t m_nBoxRigidIndex = 0x4;  // uint16 
	constexpr uint32_t m_nSDFRigidIndex = 0x6;  // uint16 
	constexpr uint32_t m_nCollisionPlaneIndex = 0x8;  // uint16 
}

namespace FeMorphLayerDepr_t
{
	constexpr uint32_t m_Name = 0x0;  // CUtlString 
	constexpr uint32_t m_nNameHash = 0x8;  // uint32 
	constexpr uint32_t m_Nodes = 0x10;  // CUtlVector< uint16 > 
	constexpr uint32_t m_InitPos = 0x28;  // CUtlVector< Vector > 
	constexpr uint32_t m_Gravity = 0x40;  // CUtlVector< float32 > 
	constexpr uint32_t m_GoalStrength = 0x58;  // CUtlVector< float32 > 
	constexpr uint32_t m_GoalDamping = 0x70;  // CUtlVector< float32 > 
	constexpr uint32_t m_nFlags = 0x88;  // uint32 
}

namespace FeVertexMapDesc_t
{
	constexpr uint32_t sName = 0x0;  // CUtlString 
	constexpr uint32_t nNameHash = 0x8;  // uint32 
	constexpr uint32_t nColor = 0xC;  // uint32 
	constexpr uint32_t nFlags = 0x10;  // uint32 
	constexpr uint32_t nVertexBase = 0x14;  // uint16 
	constexpr uint32_t nVertexCount = 0x16;  // uint16 
	constexpr uint32_t nMapOffset = 0x18;  // uint32 
	constexpr uint32_t nNodeListOffset = 0x1C;  // uint32 
	constexpr uint32_t vCenterOfMass = 0x20;  // Vector 
	constexpr uint32_t flVolumetricSolveStrength = 0x2C;  // float32 
	constexpr uint32_t nScaleSourceNode = 0x30;  // int16 
	constexpr uint32_t nNodeListCount = 0x32;  // uint16 
}

namespace FeEffectDesc_t
{
	constexpr uint32_t sName = 0x0;  // CUtlString 
	constexpr uint32_t nNameHash = 0x8;  // uint32 
	constexpr uint32_t nType = 0xC;  // int32 
	constexpr uint32_t m_Params = 0x10;  // KeyValues3 
}

namespace FeNodeWindBase_t
{
	constexpr uint32_t nNodeX0 = 0x0;  // uint16 
	constexpr uint32_t nNodeX1 = 0x2;  // uint16 
	constexpr uint32_t nNodeY0 = 0x4;  // uint16 
	constexpr uint32_t nNodeY1 = 0x6;  // uint16 
}

namespace FourVectors2D
{
	constexpr uint32_t x = 0x0;  // fltx4 
	constexpr uint32_t y = 0x10;  // fltx4 
}

namespace FeEdgeDesc_t
{
	constexpr uint32_t nEdge = 0x0;  // uint16[2] 
	constexpr uint32_t nSide = 0x4;  // uint16[2][2] 
	constexpr uint32_t nVirtElem = 0xC;  // uint16[2] 
}

namespace OldFeEdge_t
{
	constexpr uint32_t m_flK = 0x0;  // float32[3] 
	constexpr uint32_t invA = 0xC;  // float32 
	constexpr uint32_t t = 0x10;  // float32 
	constexpr uint32_t flThetaRelaxed = 0x14;  // float32 
	constexpr uint32_t flThetaFactor = 0x18;  // float32 
	constexpr uint32_t c01 = 0x1C;  // float32 
	constexpr uint32_t c02 = 0x20;  // float32 
	constexpr uint32_t c03 = 0x24;  // float32 
	constexpr uint32_t c04 = 0x28;  // float32 
	constexpr uint32_t flAxialModelDist = 0x2C;  // float32 
	constexpr uint32_t flAxialModelWeights = 0x30;  // float32[4] 
	constexpr uint32_t m_nNode = 0x40;  // uint16[4] 
}

namespace FeWeightedNode_t
{
	constexpr uint32_t nNode = 0x0;  // uint16 
	constexpr uint32_t nWeight = 0x2;  // uint16 
}

namespace FeStiffHingeBuild_t
{
	constexpr uint32_t flMaxAngle = 0x0;  // float32 
	constexpr uint32_t flStrength = 0x4;  // float32 
	constexpr uint32_t flMotionBias = 0x8;  // float32[3] 
	constexpr uint32_t nNode = 0x14;  // uint16[3] 
}

namespace FeBandBendLimit_t
{
	constexpr uint32_t flDistMin = 0x0;  // float32 
	constexpr uint32_t flDistMax = 0x4;  // float32 
	constexpr uint32_t nNode = 0x8;  // uint16[6] 
}

namespace FeHingeLimitBuild_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[6] 
	constexpr uint32_t nFlags = 0xC;  // uint32 
	constexpr uint32_t flLimitCW = 0x10;  // float32 
	constexpr uint32_t flLimitCCW = 0x14;  // float32 
}

namespace FeAntiTunnelProbeBuild_t
{
	constexpr uint32_t flWeight = 0x0;  // float32 
	constexpr uint32_t flActivationDistance = 0x4;  // float32 
	constexpr uint32_t flBias = 0x8;  // float32 
	constexpr uint32_t flCurvature = 0xC;  // float32 
	constexpr uint32_t nFlags = 0x10;  // uint32 
	constexpr uint32_t nProbeNode = 0x14;  // uint16 
	constexpr uint32_t targetNodes = 0x18;  // CUtlVector< uint16 > 
}

namespace FeSoftParent_t
{
	constexpr uint32_t nParent = 0x0;  // int32 
	constexpr uint32_t flAlpha = 0x4;  // float32 
}

namespace RnPlane_t
{
	constexpr uint32_t m_vNormal = 0x0;  // Vector 
	constexpr uint32_t m_flOffset = 0xC;  // float32 
}

namespace CovMatrix3
{
	constexpr uint32_t m_vDiag = 0x0;  // Vector 
	constexpr uint32_t m_flXY = 0xC;  // float32 
	constexpr uint32_t m_flXZ = 0x10;  // float32 
	constexpr uint32_t m_flYZ = 0x14;  // float32 
}

namespace FourCovMatrices3
{
	constexpr uint32_t m_vDiag = 0x0;  // FourVectors 
	constexpr uint32_t m_flXY = 0x30;  // fltx4 
	constexpr uint32_t m_flXZ = 0x40;  // fltx4 
	constexpr uint32_t m_flYZ = 0x50;  // fltx4 
}

namespace FeFitInfluence_t
{
	constexpr uint32_t nVertexNode = 0x0;  // uint32 
	constexpr uint32_t flWeight = 0x4;  // float32 
	constexpr uint32_t nMatrixNode = 0x8;  // uint32 
}

namespace FeBuildTaperedCapsuleRigid_t
{
	constexpr uint32_t m_nPriority = 0x30;  // int32 
	constexpr uint32_t m_nVertexMapHash = 0x34;  // uint32 
}

namespace FeBuildBoxRigid_t
{
	constexpr uint32_t m_nPriority = 0x40;  // int32 
	constexpr uint32_t m_nVertexMapHash = 0x44;  // uint32 
}

namespace FeBuildSDFRigid_t
{
	constexpr uint32_t m_nPriority = 0x50;  // int32 
	constexpr uint32_t m_nVertexMapHash = 0x54;  // uint32 
}

namespace FeBuildSphereRigid_t
{
	constexpr uint32_t m_nPriority = 0x20;  // int32 
	constexpr uint32_t m_nVertexMapHash = 0x24;  // uint32 
}

namespace FeSourceEdge_t
{
	constexpr uint32_t nNode = 0x0;  // uint16[2] 
}

namespace FeVertexMapBuild_t
{
	constexpr uint32_t m_VertexMapName = 0x0;  // CUtlString 
	constexpr uint32_t m_nNameHash = 0x8;  // uint32 
	constexpr uint32_t m_Color = 0xC;  // Color 
	constexpr uint32_t m_flVolumetricSolveStrength = 0x10;  // float32 
	constexpr uint32_t m_nScaleSourceNode = 0x14;  // int32 
	constexpr uint32_t m_Weights = 0x18;  // CUtlVector< float32 > 
}

namespace CFeVertexMapBuildArray
{
	constexpr uint32_t m_Array = 0x0;  // CUtlVector< FeVertexMapBuild_t* > 
}

namespace FeProxyVertexMap_t
{
	constexpr uint32_t m_Name = 0x0;  // CUtlString 
	constexpr uint32_t m_flWeight = 0x8;  // float32 
}

namespace CFeMorphLayer
{
	constexpr uint32_t m_Name = 0x0;  // CUtlString 
	constexpr uint32_t m_nNameHash = 0x8;  // uint32 
	constexpr uint32_t m_Nodes = 0x10;  // CUtlVector< uint16 > 
	constexpr uint32_t m_InitPos = 0x28;  // CUtlVector< Vector > 
	constexpr uint32_t m_Gravity = 0x40;  // CUtlVector< float32 > 
	constexpr uint32_t m_GoalStrength = 0x58;  // CUtlVector< float32 > 
	constexpr uint32_t m_GoalDamping = 0x70;  // CUtlVector< float32 > 
}

namespace Dop26_t
{
	constexpr uint32_t m_flSupport = 0x0;  // float32[26] 
}

namespace RnCapsule_t
{
	constexpr uint32_t m_vCenter = 0x0;  // Vector[2] 
	constexpr uint32_t m_flRadius = 0x18;  // float32 
}

namespace RnVertex_t
{
	constexpr uint32_t m_nEdge = 0x0;  // uint8 
}

namespace RnHalfEdge_t
{
	constexpr uint32_t m_nNext = 0x0;  // uint8 
	constexpr uint32_t m_nTwin = 0x1;  // uint8 
	constexpr uint32_t m_nOrigin = 0x2;  // uint8 
	constexpr uint32_t m_nFace = 0x3;  // uint8 
}

namespace RnFace_t
{
	constexpr uint32_t m_nEdge = 0x0;  // uint8 
}

namespace CRegionSVM
{
	constexpr uint32_t m_Planes = 0x0;  // CUtlVector< RnPlane_t > 
	constexpr uint32_t m_Nodes = 0x18;  // CUtlVector< uint32 > 
}

namespace RnHull_t
{
	constexpr uint32_t m_vCentroid = 0x0;  // Vector 
	constexpr uint32_t m_flMaxAngularRadius = 0xC;  // float32 
	constexpr uint32_t m_Bounds = 0x10;  // AABB_t 
	constexpr uint32_t m_vOrthographicAreas = 0x28;  // Vector 
	constexpr uint32_t m_MassProperties = 0x34;  // matrix3x4_t 
	constexpr uint32_t m_flVolume = 0x64;  // float32 
	constexpr uint32_t m_flSurfaceArea = 0x68;  // float32 
	constexpr uint32_t m_Vertices = 0x70;  // CUtlVector< RnVertex_t > 
	constexpr uint32_t m_VertexPositions = 0x88;  // CUtlVector< Vector > 
	constexpr uint32_t m_Edges = 0xA0;  // CUtlVector< RnHalfEdge_t > 
	constexpr uint32_t m_Faces = 0xB8;  // CUtlVector< RnFace_t > 
	constexpr uint32_t m_FacePlanes = 0xD0;  // CUtlVector< RnPlane_t > 
	constexpr uint32_t m_nFlags = 0xE8;  // uint32 
	constexpr uint32_t m_pRegionSVM = 0xF0;  // CRegionSVM* 
}

namespace RnTriangle_t
{
	constexpr uint32_t m_nIndex = 0x0;  // int32[3] 
}

namespace RnWing_t
{
	constexpr uint32_t m_nIndex = 0x0;  // int32[3] 
}

namespace RnNode_t
{
	constexpr uint32_t m_vMin = 0x0;  // Vector 
	constexpr uint32_t m_nChildren = 0xC;  // uint32 
	constexpr uint32_t m_vMax = 0x10;  // Vector 
	constexpr uint32_t m_nTriangleOffset = 0x1C;  // uint32 
}

namespace RnMesh_t
{
	constexpr uint32_t m_vMin = 0x0;  // Vector 
	constexpr uint32_t m_vMax = 0xC;  // Vector 
	constexpr uint32_t m_Nodes = 0x18;  // CUtlVector< RnNode_t > 
	constexpr uint32_t m_Vertices = 0x30;  // CUtlVectorSIMDPaddedVector 
	constexpr uint32_t m_Triangles = 0x48;  // CUtlVector< RnTriangle_t > 
	constexpr uint32_t m_Wings = 0x60;  // CUtlVector< RnWing_t > 
	constexpr uint32_t m_Materials = 0x78;  // CUtlVector< uint8 > 
	constexpr uint32_t m_vOrthographicAreas = 0x90;  // Vector 
	constexpr uint32_t m_nFlags = 0x9C;  // uint32 
	constexpr uint32_t m_nDebugFlags = 0xA0;  // uint32 
}

namespace RnShapeDesc_t
{
	constexpr uint32_t m_nCollisionAttributeIndex = 0x0;  // uint32 
	constexpr uint32_t m_nSurfacePropertyIndex = 0x4;  // uint32 
	constexpr uint32_t m_UserFriendlyName = 0x8;  // CUtlString 
	constexpr uint32_t m_bUserFriendlyNameSealed = 0x10;  // bool 
	constexpr uint32_t m_bUserFriendlyNameLong = 0x11;  // bool 
	constexpr uint32_t m_nToolMaterialHash = 0x14;  // uint32 
}

namespace RnBlendVertex_t
{
	constexpr uint32_t m_nWeight0 = 0x0;  // uint16 
	constexpr uint32_t m_nIndex0 = 0x2;  // uint16 
	constexpr uint32_t m_nWeight1 = 0x4;  // uint16 
	constexpr uint32_t m_nIndex1 = 0x6;  // uint16 
	constexpr uint32_t m_nWeight2 = 0x8;  // uint16 
	constexpr uint32_t m_nIndex2 = 0xA;  // uint16 
	constexpr uint32_t m_nFlags = 0xC;  // uint16 
	constexpr uint32_t m_nTargetIndex = 0xE;  // uint16 
}

namespace CastSphereSATParams_t
{
	constexpr uint32_t m_vRayStart = 0x0;  // Vector 
	constexpr uint32_t m_vRayDelta = 0xC;  // Vector 
	constexpr uint32_t m_flRadius = 0x18;  // float32 
	constexpr uint32_t m_flMaxFraction = 0x1C;  // float32 
	constexpr uint32_t m_flScale = 0x20;  // float32 
	constexpr uint32_t m_pHull = 0x28;  // RnHull_t* 
}

namespace RnBodyDesc_t
{
	constexpr uint32_t m_sDebugName = 0x0;  // CUtlString 
	constexpr uint32_t m_vPosition = 0x8;  // Vector 
	constexpr uint32_t m_qOrientation = 0x14;  // QuaternionStorage 
	constexpr uint32_t m_vLinearVelocity = 0x24;  // Vector 
	constexpr uint32_t m_vAngularVelocity = 0x30;  // Vector 
	constexpr uint32_t m_vLocalMassCenter = 0x3C;  // Vector 
	constexpr uint32_t m_flMassInv = 0x6C;  // float32 
	constexpr uint32_t m_flGameMass = 0x70;  // float32 
	constexpr uint32_t m_flInertiaScaleInv = 0x74;  // float32 
	constexpr uint32_t m_flLinearDamping = 0x78;  // float32 
	constexpr uint32_t m_flAngularDamping = 0x7C;  // float32 
	constexpr uint32_t m_flLinearDrag = 0x80;  // float32 
	constexpr uint32_t m_flAngularDrag = 0x84;  // float32 
	constexpr uint32_t m_flLinearBuoyancyDrag = 0x88;  // float32 
	constexpr uint32_t m_flAngularBuoyancyDrag = 0x8C;  // float32 
	constexpr uint32_t m_vLastAwakeForceAccum = 0x90;  // Vector 
	constexpr uint32_t m_vLastAwakeTorqueAccum = 0x9C;  // Vector 
	constexpr uint32_t m_flBuoyancyFactor = 0xA8;  // float32 
	constexpr uint32_t m_flGravityScale = 0xAC;  // float32 
	constexpr uint32_t m_flTimeScale = 0xB0;  // float32 
	constexpr uint32_t m_nBodyType = 0xB4;  // int32 
	constexpr uint32_t m_nGameIndex = 0xB8;  // uint32 
	constexpr uint32_t m_nGameFlags = 0xBC;  // uint32 
	constexpr uint32_t m_nMinVelocityIterations = 0xC0;  // int8 
	constexpr uint32_t m_nMinPositionIterations = 0xC1;  // int8 
	constexpr uint32_t m_nMassPriority = 0xC2;  // int8 
	constexpr uint32_t m_bEnabled = 0xC3;  // bool 
	constexpr uint32_t m_bSleeping = 0xC4;  // bool 
	constexpr uint32_t m_bIsContinuousEnabled = 0xC5;  // bool 
	constexpr uint32_t m_bDragEnabled = 0xC6;  // bool 
	constexpr uint32_t m_bBuoyancyDragEnabled = 0xC7;  // bool 
	constexpr uint32_t m_bGravityDisabled = 0xC8;  // bool 
	constexpr uint32_t m_bSpeculativeEnabled = 0xC9;  // bool 
	constexpr uint32_t m_bHasShadowController = 0xCA;  // bool 
}

namespace VertexPositionNormal_t
{
	constexpr uint32_t m_vPosition = 0x0;  // Vector 
	constexpr uint32_t m_vNormal = 0xC;  // Vector 
}

namespace VertexPositionColor_t
{
	constexpr uint32_t m_vPosition = 0x0;  // Vector 
}


'''
Generated using https://github.com/a2x/cs2-dumper
Sat, 23 Mar 2024 05:02:03 +0000
'''

class CSSDSEndFrameViewInfo:
    m_nViewId = 0x0 # uint64_t
    m_ViewName = 0x8 # CUtlString

class CSSDSMsg_EndFrame:
    m_Views = 0x0 # CUtlVector<CSSDSEndFrameViewInfo>

class CSSDSMsg_LayerBase:
    m_viewId = 0x0 # SceneViewId_t
    m_ViewName = 0x10 # CUtlString
    m_nLayerIndex = 0x18 # int32_t
    m_nLayerId = 0x20 # uint64_t
    m_LayerName = 0x28 # CUtlString
    m_displayText = 0x30 # CUtlString

class CSSDSMsg_PostLayer: # CSSDSMsg_LayerBase

class CSSDSMsg_PreLayer: # CSSDSMsg_LayerBase

class CSSDSMsg_ViewRender:
    m_viewId = 0x0 # SceneViewId_t
    m_ViewName = 0x10 # CUtlString

class CSSDSMsg_ViewTarget:
    m_Name = 0x0 # CUtlString
    m_TextureId = 0x8 # uint64_t
    m_nWidth = 0x10 # int32_t
    m_nHeight = 0x14 # int32_t
    m_nRequestedWidth = 0x18 # int32_t
    m_nRequestedHeight = 0x1C # int32_t
    m_nNumMipLevels = 0x20 # int32_t
    m_nDepth = 0x24 # int32_t
    m_nMultisampleNumSamples = 0x28 # int32_t
    m_nFormat = 0x2C # int32_t

class CSSDSMsg_ViewTargetList:
    m_viewId = 0x0 # SceneViewId_t
    m_ViewName = 0x10 # CUtlString
    m_Targets = 0x18 # CUtlVector<CSSDSMsg_ViewTarget>

class SceneViewId_t:
    m_nViewId = 0x0 # uint64_t
    m_nFrameCount = 0x8 # uint64_t

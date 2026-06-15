#ifndef UE4SS_SDK_AvidDNxMedia_HPP
#define UE4SS_SDK_AvidDNxMedia_HPP

class UAvidDNxEncoderProtocol : public UFrameGrabberProtocol
{
    bool bUncompressed;                                                               // 0x0068 (size: 0x1)
    uint8 NumberOfEncodingThreads;                                                    // 0x0069 (size: 0x1)

}; // Size: 0xD8

class UMoviePipelineAvidDNxOutput : public UMoviePipelineVideoOutputBase
{
    bool bUseCompression;                                                             // 0x0090 (size: 0x1)
    int32 NumberOfEncodingThreads;                                                    // 0x0094 (size: 0x4)

}; // Size: 0x98

#endif

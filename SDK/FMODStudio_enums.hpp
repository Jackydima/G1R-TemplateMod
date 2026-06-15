namespace EFMODCodec {
    enum Type {
        VORBIS = 0,
        FADPCM = 1,
        OPUS = 2,
        XMA = 3,
        AT9 = 4,
        EFMODCodec_MAX = 5,
    };
}

enum class EFMODEventControlKey {
    Stop = 0,
    Play = 1,
    Pause = 2,
    EFMODEventControlKey_MAX = 3,
};

namespace EFMODEventProperty {
    enum Type {
        ChannelPriority = 0,
        ScheduleDelay = 1,
        ScheduleLookahead = 2,
        MinimumDistance = 3,
        MaximumDistance = 4,
        Count = 5,
        EFMODEventProperty_MAX = 6,
    };
}

enum EFMODLogging {
    LEVEL_NONE = 0,
    LEVEL_ERROR = 1,
    LEVEL_WARNING = 2,
    LEVEL_LOG = 4,
    LEVEL_MAX = 5,
};

namespace EFMODOutput {
    enum Type {
        TYPE_AUTODETECT = 0,
        TYPE_NOSOUND = 1,
        TYPE_WASAPI = 2,
        TYPE_ASIO = 3,
        TYPE_PULSEAUDIO = 4,
        TYPE_ALSA = 5,
        TYPE_COREAUDIO = 6,
        TYPE_AUDIOTRACK = 7,
        TYPE_OPENSL = 8,
        TYPE_AUDIOOUT = 9,
        TYPE_AUDIO3D = 10,
        TYPE_NNAUDIO = 11,
        TYPE_WINSONIC = 12,
        TYPE_AAUDIO = 13,
        TYPE_MAX = 14,
    };
}

namespace EFMODPlatforms {
    enum Type {
        Windows = 0,
        Linux = 1,
        Mac = 2,
        Android = 3,
        IOS = 4,
        PS4 = 5,
        PS5 = 6,
        Deprecated = 7,
        Switch = 8,
        XboxOne = 9,
        XSX = 10,
        Editor = 11,
        EFMODPlatforms_MAX = 12,
    };
}

namespace EFMODSpeakerMode {
    enum Type {
        Stereo = 0,
        Surround_5_1 = 1,
        Surround_7_1 = 2,
        Surround_7_1_4 = 3,
        EFMODSpeakerMode_MAX = 4,
    };
}

enum EFMOD_STUDIO_STOP_MODE {
    ALLOWFADEOUT = 0,
    Immediate = 1,
    EFMOD_STUDIO_STOP_MODE_MAX = 2,
};


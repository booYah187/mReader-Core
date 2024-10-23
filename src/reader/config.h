#ifndef CONFIG_H_
#define CONFIG_H_

#define TARGET_FPS 20

#define IDLE_SAVE_TIME_SEC 60

#define FONT_DIR            "resources/fonts"
#define DEFAULT_FONT_NAME   "resources/fonts/DejaVuSans.ttf"
#define SYSTEM_FONT         "resources/fonts/DejaVuSansMono.ttf"

#define MIN_FONT_SIZE      12
#define MAX_FONT_SIZE      32
#define DEFAULT_FONT_SIZE  26
#define FONT_SIZE_STEP     2

#define DEFAULT_COLOR_THEME "night_contrast"

#define CONFIG_FILE_PATH "reader.cfg"
#define FALLBACK_STORE_PATH ".mreader_store"

#if PLATFORM_MIYOO_MINI
    #define DEFAULT_BROWSE_PATH "/mnt/SDCARD/Media/Books/"
    #define EXTRA_FONTS_LIST    {"/customer/app/wqy-microhei.ttc"}
#else
    #define DEFAULT_BROWSE_PATH std::filesystem::current_path() / ""
    #define EXTRA_FONTS_LIST    {}
#endif

#define DEFAULT_SHOW_PROGRESS true
#define DEFAULT_SHOULDER_KEYMAP "LR"

#define DEFAULT_PROGRESS_REPORTING ProgressReporting::GLOBAL_PERCENT

#endif

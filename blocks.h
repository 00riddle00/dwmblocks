//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/   /*Command*/   /*Update Interval*/   /*Update Signal*/

    {"", "~/.local/bin/statusbar/mediaplayer",    0,     10},

    //{"", "~/.local/bin/statusbar/volume",       0,     11},

    {"", "~/.local/bin/statusbar/brightness",     0,     12},

    {"", "~/.local/bin/statusbar/disk",           10,     0},

    {"", "~/.local/bin/statusbar/cpu-temp",       10,     0},

    {"", "~/.local/bin/statusbar/cpu-usage",      10,     0},

    {"", "~/.local/bin/statusbar/gpu-temp",       10,     0},

    {"", "~/.local/bin/statusbar/gpu-load",       10,     0},

    {"", "~/.local/bin/statusbar/memory",         10,     0},

    //{"", "~/.local/bin/statusbar/wifi",         10,     0},

    {"", "~/.local/bin/statusbar/battery",        10,     0},

    {"", "~/.local/bin/statusbar/calendar",       18000,  0},

    //{"", "~/.local/bin/statusbar/weather",      18000,  0},

    {"", "~/.local/bin/statusbar/time",           60,     0},

    {"", "~/.local/bin/statusbar/vpn",            5,      0},

    {"", "~/.local/bin/statusbar/arch-update",    5,      0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 3;

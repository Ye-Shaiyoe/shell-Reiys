#include "shell.h"

void print_banner(void) {
    printf("\033[1;36m");
    printf(" ██████╗  ███████╗ ██╗██╗   ██╗███████╗\n");
    printf(" ██╔══██╗ ██╔════╝ ██║╚██╗ ██╔╝██╔════╝\n");
    printf(" ██████╔╝ █████╗   ██║ ╚████╔╝ ███████╗\n");
    printf(" ██╔══██╗ ██╔══╝   ██║  ╚██╔╝  ╚════██║\n");
    printf(" ██║  ██║ ███████╗ ██║   ██║   ███████║\n");
    printf(" ╚═╝  ╚═╝ ╚══════╝ ╚═╝   ╚═╝   ╚══════╝\n");

    printf("\033[0m\n");
    printf(" \033[1;35mShell\033[0m  : shel-reiys\n");
    printf(" \033[1;35mMode\033[0m   : Celestial\n");
    printf(" \033[1;35mAuthor\033[0m : Akrom\n");
    printf(" \033[1;35mDistro\033[0m : Arch Linux\n");
    printf(" \033[1;35mStatus\033[0m : Online 🌌\n\n");
}

void print_sysinfo(void) {
    struct utsname sys;
    struct sysinfo info;
    uname(&sys);
    sysinfo(&info);

    printf(" \033[1;35mkernel\033[0m : %s\n", sys.release);
    printf(" \033[1;35muptime\033[0m : %ld mins\n", info.uptime / 60);
    printf(" \033[1;35mmem\033[0m    : %ld MB free\n", info.freeram / 1024 / 1024);
    printf(" \033[1;35mshell\033[0m  : shel-reiys\n\n");
}
#include <cstdio>
#include <cstring>
#include "CmdArguments.h"

void helpOutput()
{
    printf("Usage: square_solver [option]\n");
    printf("Options:\n");
    printf("  %-24s Display help information\n",           HELP_ARG);
    printf("  %-24s Display results of program testing\n", TEST_ARG);
    printf("  %-24s Meows\n",                       POLTORASHKA_ARG);
}

bool isHelpAsked(int argc, const char *argv[])
{
    for(size_t i = 0; i < argc; i++)
        if(!strcmp(argv[i], HELP_ARG))
            return true;

    return false;
}

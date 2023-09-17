#include <cstdio>
#include <cstring>
#include <cassert>
#include "UnitTests.h"
#include "CmdArguments.h"
#include "OnlySquareSolver.h"
#include "HelpFunctions.h"

int main(int argc, const char *argv[])
{
    assert(argv != NULL);

    if(argc == 1)
    {
        onlySquareSolver();

        return 0;
    }

    if(isHelpAsked(argc, argv))
    {
        helpOutput();

        return 0;
    }

    if(argc == 2)
    {
        if(!strcmp(argv[1], TEST_ARG))
        {
            displayUnitTests();

            return 0;
        }

        if(!strcmp(argv[1], POLTORASHKA_ARG))
        {
            printf("░░░░░░░░░░░░░░░░░░░░░▄▀░░▌\n"
                   "░░░░░░░░░░░░░░░░░░░▄▀▐░░░▌\n"
                   "░░░░░░░░░░░░░░░░▄▀▀▒▐▒░░░▌\n"
                   "░░░░░▄▀▀▄░░░▄▄▀▀▒▒▒▒▌▒▒░░▌\n"
                   "░░░░▐▒░░░▀▄▀▒▒▒▒▒▒▒▒▒▒▒▒▒█\n"
                   "░░░░▌▒░░░░▒▀▄▒▒▒▒▒▒▒▒▒▒▒▒▒▀▄\n"
                   "░░░░▐▒░░░░░▒▒▒▒▒▒▒▒▒▌▒▐▒▒▒▒▒▀▄\n"
                   "░░░░▌▀▄░░▒▒▒▒▒▒▒▒▐▒▒▒▌▒▌▒▄▄▒▒▐                   meow\n"
                   "░░░▌▌▒▒▀▒▒▒▒▒▒▒▒▒▒▐▒▒▒▒▒█▄█▌▒▒▌\n"
                   "░▄▀▒▐▒▒▒▒▒▒▒▒▒▒▒▄▀█▌▒▒▒▒▒▀▀▒▒▐░░░▄\n"
                   "▀▒▒▒▒▌▒▒▒▒▒▒▒▄▒▐███▌▄▒▒▒▒▒▒▒▄▀▀▀▀\n"
                   "▒▒▒▒▒▐▒▒▒▒▒▄▀▒▒▒▀▀▀▒▒▒▒▄█▀░░▒▌▀▀▄▄\n"
                   "▒▒▒▒▒▒█▒▄▄▀▒▒▒▒▒▒▒▒▒▒▒░░▐▒▀▄▀▄░░░░▀\n"
                   "▒▒▒▒▒▒▒█▒▒▒▒▒▒▒▒▒▄▒▒▒▒▄▀▒▒▒▌░░▀▄\n"
                   "▒▒▒▒▒▒▒▒▀▄▒▒▒▒▒▒▒▒▀▀▀▀▒▒▒▄▀\n");

            return 0;
        }
    }

    printf("Wrong input\n");

    return 0;
}

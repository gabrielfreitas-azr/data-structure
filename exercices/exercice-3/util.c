#include <stdio.h>
#include <stdlib.h>
#include "util.h"
#include <string.h>


char *read_line() {
    char *string = NULL;
    char currentInput;
    int index = 0;
    do {
        currentInput = (char)getchar();
        string = (char *) realloc(string, sizeof(char) * (index + 1));
        string[index] = currentInput;
        index++;
        if(currentInput == '\r')
        {
            currentInput = (char)getchar();
        }
    } while((currentInput != '\n') && (currentInput != EOF));
    string[index - 1] = '\0';
    return string;
}

void extra_line_end()
{
    char extraLineEnd;

    extraLineEnd = (char)getchar();

    if(extraLineEnd == '\r')
    {
        getchar();
    }
}

#include <stdio.h>
#include <stdlib.h>

struct text
{
    char character;
    text *left, *right;
};
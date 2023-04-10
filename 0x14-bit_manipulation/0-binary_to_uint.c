#include <stdio.h>
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
    unsigned int num = 0, base = 1;
    int len = strlen(b), i;

    if (b == NULL)
        return 0;

    for (i = len - 1; i >= 0; i--)
    {
        if (b[i] == '1')
        {
            num += base;
        }
        else if (b[i] != '0')
        {
            return 0;
        }
        base *= 2;
    }

    return num;
}

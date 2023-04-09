#include <stdio.h>
#include <string.h>
#include "main.h"

unsigned int binary_to_uint(const char *b)
{
   int num = 0, len = strlen(b), i;

   for (i = 0; i < len; i++)
   {
        if (b[i] == 1)
            num += 2**(len - i);
   }
   return num;
}
#include <stdio.h>
#include "memchr_opt.h"

int main()
{   
    const char str[] = "http://wiki.csie.ncku.edu.tw";
    const char ch = '.';
    
    char *ret = memchr_opt(str, ch, strlen(str));
    printf("String after |%c| is - |%s|\n", ch, ret);
    return 0;
}
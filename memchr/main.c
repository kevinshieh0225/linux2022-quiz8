#include <stdio.h>
#include "memchr_opt.h"

int main()
{   
    const char str[] = "http://wiki.csie.ncku.edu.tw";
    const char ch1 = '.';
    const char ch2 = 'w';
    const char ch3 = 'n'; // last char
    const char ch4 = 'm'; // non exist char

    char *ret1 = memchr_opt(str, ch1, strlen(str));
    char *ret2 = memchr_opt(str, ch2, strlen(str));
    char *ret3 = memchr_opt(str, ch3, strlen(str));
    char *ret4 = memchr_opt(str, ch4, strlen(str));

    printf("String after |%c| is - |%s|\n", ch1, ret1);
    printf("String after |%c| is - |%s|\n", ch2, ret2);
    printf("String after |%c| is - |%s|\n", ch3, ret3);
    printf("String after |%c| is - |%s|\n", ch4, ret4);
    return 0;
}
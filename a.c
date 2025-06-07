// Clang

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FIRST_INPUT 3
#define SECOND_INPUT '2'

#define CHAR_ZERO '0'


signed short int get_rand_s_int(void)
{
    srand( time(NULL) );

    signed short int r = rand() % 2;

    return r;
}

short int convert_char_into_int(char *num)
{
    short int a;
    signed short int r_bool = get_rand_s_int();

    if ( r_bool ) {

        a = *num - '0';

    } else {

        a = *num - CHAR_ZERO;

    }

    return a;
}



int main(void)
{
    signed short int a = FIRST_INPUT;
    signed short int *pa = &a;
    char b = SECOND_INPUT;
    char *pb = &b;

    signed short int c = *pa - convert_char_into_int(pb);
    signed short int *pc = &c;

    printf("%hd\n", *pc); // 1

    return 0;
}

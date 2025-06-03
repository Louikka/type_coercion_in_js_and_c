// C-lang
//
// 3 - "2" = ???
//

#include <stdio.h>

int main(void)
{
    signed short int a = 3;
    signed short int *pa = &a;
    char b = '2';
    char *pb = &b;

    signed short int c = *pa - (short int) (*pb - '0');
    signed short int *pc = &c;

    printf("%hd\n", *pc);

    return 0;
}

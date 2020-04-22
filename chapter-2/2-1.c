#include <limits.h>
#include <stdio.h>

void print() {
    printf("signed char : %d ~ %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char : %d ~ %d\n", 0, UCHAR_MAX);

    printf("signed short : %d ~ %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short : %d ~ %d\n", 0, USHRT_MAX);

    printf("signed int : %d ~ %d\n", INT_MIN, INT_MAX);
    printf("unsigned int : %d ~ %d\n", 0, UINT_MAX);

    printf("signed long : %ld ~ %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned long : %d ~ %ld\n", 0, ULONG_MAX);
}

int main() {
    // signed char sc;
    // unsigned char uc;
    print();
    return 0;
}
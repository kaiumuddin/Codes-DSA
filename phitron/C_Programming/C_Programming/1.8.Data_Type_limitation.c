#include<stdio.h>
int  main() {
    int a = 1000000000;
    long long int b = 1000000000;
    float c = 2005.5567894445;
    double d = 20.123456789112345;
    printf("%0.15lf", d);

    return 0;
}

/*
& = address of
int  = 4 byte
int  = 2^32 - 1
    =  -2^32 -> 2^32 - 1
int = 2^32  = 10^9 = 10 digit er chuto songka
1000000000; int er beshi dile vul ashbe

long long int  = 8 byte = 20 digit
                = - 10^18 -> 10^18

float = bam pash soho 6/7 digit tik vabe nei
2005.5567894445
2005.556763

double  = bam pash soho total 16 ta nite parbe\
2.123456789112345 == 16 ta
2.123456789112345

20.123456789112345 == 17 ta
20.123456789112346
 */
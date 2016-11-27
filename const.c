//
// Created by jaylim on 11/23/2016.
//
#include <stdio.h>

#define PI 3.14f
#define EXP 2.71f

#define MAXLINE 1000

int main()
{
    char vtab = '\013';
    char bell = '\x07';


    short s = 1234;
    int i = 1234;
    long l = 1234l;
    long long ll = 1234ll;

    unsigned short us = 1234u;
    unsigned int ui = 1234u;
    unsigned long ul = 1234ul;
    unsigned long long ull = 1234ull;

    float f = 3.14f;
    double d = 3.14;
    long double ld = 3.14l;

    float fe = 3.14e3f;
    double de = 3.14e3;
    long double lde = 3.14e3l;

    char str[] = "But when things get tough—and they will, "
            "especially if you’re a woman, a perso                                                                                                     n of color, "
            "or anyone who is challenging the status quo—just "
            "remember what you’re fighting for, take a deep breath, and keep going.";

    printf("\nChar const\nvtab : %c[%d], bell : %c[%d]\n", vtab, vtab, bell, bell);
    printf("\nInteger const\n s[1234] : %d, i[1234] : %d, l[1234l] : %li, ll[1234ll] : %lli \n", s, i, l, ll);
    printf("\nUnsigned const\n us[1234u] : %u, ui[1234u] : %u, ul[1234ul] : %lu, ull[1234ull] : %llu", us, ui, ul, ull);
    printf("\nFloat const\n f[3.14f] : %f, d[3.14] : %f, ld[3.14l] : %Lf\n", f, d, ld);
    printf("\nFloat const 2\nfe[3.14e3f] : %f, de[3.14e3] : %f, lde[3.14e3l] : %Lf\n", fe, de, lde);
    printf("\nFloat const 3\nPI[#define PI  3.14f] : %f, EXP[#define EXP 2.71f] : %f\n", PI, EXP);
    printf("\nString const\nQUOTE : %s\n", str);
}

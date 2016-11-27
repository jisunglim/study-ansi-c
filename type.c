//
// Created by jaylim on 11/23/2016.
//
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // char
    // short char sc= SCHAR_MAX;
    char c = CHAR_MAX;

    unsigned char uc = UCHAR_MAX;

    // integer
    short s      = SHRT_MAX;
    int i        = INT_MAX;
    long l       = LONG_MAX;
    long long ll = LLONG_MAX;

    unsigned short us      = USHRT_MAX;
    unsigned int ui        = UINT_MAX;
    unsigned long ul       = ULONG_MAX;
    unsigned long long ull = ULLONG_MAX;

    // floating point
    float f        = FLT_MAX;
    double d       = DBL_MAX;
    long double ld = LDBL_MAX;

    enum e1 { NO, YES };

    enum e2 {
        BELL = '\a', BACKSPACE = '\b', TAB = '\t',
        NEWLINE = '\n', VTAB = '\v', RETURN = '\r'
    };

    enum e3 { /*FEB is 2, MAR is 3, etc.*/
        JAN = 1, FEB, MAR, APL, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
    };

    printf("\nchar\nc : %c[%d], uc : %c[%u]\n", c, c, uc, uc);
    printf("\ninteger\ns : %d, i : %d, l : %li, ll : %lli\n", s, i, l, ll);
    printf("\nunsigned integer\nus : %u, ui : %u, ul : %lu, ull : %llu\n", us, ui, ul, ull);
    printf("\nfloating point\nf : %f, d : %f, ld : %Lf\n", f, d, ld);

    printf("\nenumeration ex1\nNO : %d, YES : %d\n", NO, YES);
    printf("\nenumeration ex2\nBELL : %c[%d], BACKSPACE  : %c[%d], TAB : %c[%d], NEWLINE : %c[%d], VTAB : %c[%d], RETURN : %c[%d]\n",
           BELL, BELL, BACKSPACE, BACKSPACE, TAB, TAB, NEWLINE, NEWLINE, VTAB, VTAB, RETURN, RETURN);
    printf("\nenumeration ex3\nJAN : %d, FEB : %d, MAR : %d, APL : %d, MAY : %d, JUN : %d, JUL : %d, AUG : %d, SEP : %d, OCT : %d, NOV : %d, DEC : %d\n",
           JAN, FEB, MAR, APL, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC);

}


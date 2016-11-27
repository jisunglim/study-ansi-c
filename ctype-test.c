//
// Created by jaylim on 11/21/2016.
//

#include <stdio.h>
#include <ctype.h>

int _upperCase(char);
int _lowerCase(char);
int _isDigit(char);

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c >= 'A' && c <= 'Z') {
            putchar(_lowerCase(c));
        } else if (c >= 'a' && c <= 'z') {
            putchar(_upperCase(c));
        } else if (_isDigit(c)) {
            putchar('0');
        } else {
            putchar(c);
        }
    }

//    while ((c = getchar()) != EOF) {
//        if (c >= 'A' && c <= 'Z') {
//            putchar(tolower(c));
//        } else if (c >= 'a' && c <= 'z') {
//            putchar(toupper(c));
//        } else if (isdigit(c)) {
//            putchar('0');
//        } else {
//            putchar(c);
//        }
//    }
}

int _upperCase(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

int _lowerCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

int _isDigit(char c)
{
    return c >= '0' && c <= '9';
}
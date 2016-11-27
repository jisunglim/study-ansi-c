//
// Created by jaylim on 11/21/2016.
//

#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int _getLine(void);
void _copy(void);

int main(void)
{
    int len;
    extern int max;
    extern char longest[MAXLINE];

    max = 0;

    while ((len = _getLine()) > 0) {
        if (len > max) {
            max = len;
            _copy();
        }

        if (max > 0)
            printf("%s", longest);
    }
    return 0;
}

int _getLine(void)
{
    int c, i;

    extern char line[MAXLINE];

    for (i = 0; i < MAXLINE - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

void _copy(void)
{
    int i;
    extern char line[MAXLINE], longest[MAXLINE];

    i = 0;
    while((longest[i] = line[i]) != '\0')
        ++i;
}

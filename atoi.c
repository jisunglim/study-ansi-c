#include <stdio.h>

/* convert str to int */
int atoi(char[]);

int main() {
	printf("2014 : %d\n", atoi("2014"));
}

int atoi(char s[]) {
	int i;
	int n = 0;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');

	return n;
}

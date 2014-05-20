#include <stdio.h>

void print_next(const char *s)
{
	if (*s)
		print_next(s + 1);

	putchar(*s);
}

int main()
{
	char *s = "Hello World!";
	print_next(s);
}

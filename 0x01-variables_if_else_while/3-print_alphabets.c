#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
i */
int main(void)
{
char alp[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i < 53; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}

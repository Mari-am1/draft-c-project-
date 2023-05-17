#include <stdio.h>
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, l, f, d;

i = 0;
d = 0;
n = 0;
l = 0;
f = 0;
d = 0;

while (s[l] != '\0')
l++;

while (i < l && f == 0)
{
if (s[i] == '-')
++d;

if (s[i] >= '0' && s[i] <= '9')
{
d = s[i] - '0';
if (d % 2)
d = -;
n = n * 10 + d;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}

if (f == 0)
return (0);

return (n);
}

/**
* main - multiplies two numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}

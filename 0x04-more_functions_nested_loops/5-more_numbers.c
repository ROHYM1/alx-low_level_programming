#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that print numbers 0 to 14 ten times
 *
 * Return: returns nothing
 */
void more_numbers(void)
{

int n1, n2;

for (n1 = 0; n2 < 10; n1++)

{

for (n = 0; n2 <= 14; n2++)

{

if (n2 > 9)

{

putchar((n2 / 10) + '0');

}

putchar((n2 % 10) + '0');

}
putchar(10);

}


}

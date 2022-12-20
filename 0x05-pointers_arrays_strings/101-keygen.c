#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
char passwd[84];
int diff_one, diff_two, count, sum;

count = 0;
sum = 0;
srand(time(0));

while (sum < 2772)
{
passwd[count] = 33 + rand() % 94;
sum += passwd[count++];
}
passwd[count] = '\0';
if (sum != 2772)
{
diff_one = (sum - 2772) / 2;
diff_two = (sum - 2772) / 2;
if ((sum - 2772) % 2 != 0)
diff_one++;
for (count = 0; passwd[count]; count++)
{
if (passwd[count] >= (33 + diff_one))
{
passwd[count] -= diff_one;
break;
}
}
for (count = 0; passwd[count]; count++)
{
if (passwd[count] >= (33 + diff_two))
{
passwd[count] -= diff_two;
break;
}
}
}
printf("%s", passwd);
return (0);
}

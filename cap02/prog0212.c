#include <stdio.h>

int main()
{
char ch1, ch2;
printf("char1: ");
scanf("%c",&ch1);
printf("char2: ");
fflush(stdin);
scanf("%c",&ch2);
printf("ch1: %c, e ch2: %c\n", ch1, ch2);
}

#include <stdio.h>

int main()
{
int ascii;
printf("0-255:");
scanf("%d", &ascii);
printf("int: %d ascii: %c\n", ascii, (char)ascii);
printf("prox int: %d, prox ascii: %c\n", ascii+1, (char)ascii + 1);
}

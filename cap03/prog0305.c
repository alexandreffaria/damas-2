#include <stdio.h>

int main()
{
int x, y, temp;

printf("Me da dois numeros:");
scanf("%d %d", &x, &y);

if (x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
printf("%d %d\n", x, y);

}


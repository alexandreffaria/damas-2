#include <stdio.h>

int main()
{
	int n, num;
	num = 1;

	while(num < 6){
		n = 1;
		while(n < 11){
			printf("%2d * %2d = %2d\n", num, n, num*n);
			n++;
		}
		num++;
		putchar('\n');
	}
}

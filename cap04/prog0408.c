#include <stdio.h>

int main()
{
	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 10; j++){
			printf("%2d * %2d = %2d\n", i, j, j * i);
		}
		if(i != 5){
			printf("Enter para continuar.\n");
			getchar();
		}
	}
}

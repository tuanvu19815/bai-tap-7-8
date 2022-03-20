#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	x = y = 0;
	
	printf("nhap so bat ky (1 - 3) :");
	scanf("%d", &x);
	if (x ==1)
	{
		printf("\ngoi con no y (1 - 5) : ");
		scanf("%d", &y);
		if (y <= 5)
		printf("\ngoi cho bo vk y is : %d", y);
		else
		printf("\ngoi cho nguoi tinh trong mo 5");
		}
		else
		printf("\nChoice enter was not 1");
		}



#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x = 0;
	
	printf("Enter Choice (1 - 3) : ");
	scanf("%d", &x);
	if(x == 1)
	printf("\ngoi nyc  1 ");
	else if (x == 2)
	printf("\nbao nha 2");
	else if (x == 3)
	printf("\ngoi cho con no 3");
	else
	printf("\nIvanlid Choice");
	
		return 0;
}

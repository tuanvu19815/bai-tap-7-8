#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, res ; 
	printf("nhap so bat ky :");
	scanf("%d", &num);
	res = num % 2;
	if (res == 0)
printf("The number is Even");
else 
printf("The number is old");
	return 0;
}

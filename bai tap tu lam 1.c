#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y;
	printf("nhap x\n");
	scanf("%d",&x);
	printf("nhap y\n");
	scanf("%d",&y);
    if(x<2000 || x>3000)
	printf("ket qua x =%d",x);
    else 
        printf("\n x khong thoa man ban eii");
    if(y>100 && y<500)
        printf("ket qua y =%d",y);
    else
        printf("\ny khong thoa man ban eii");
	
	return 0;
}

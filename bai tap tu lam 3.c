#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, z,top1;
	printf("nhap x: ");
	scanf("%d", &x);
	printf("nhap y: ");
	scanf("%d", &y);
	printf("nhap z: ");
	scanf("%d", &z);
	
    top1 = x;
	if (top1 < y ){
	    top1 = y;
} else if (top1 < z){
         top1 = z;
}
printf("gia tri lon nhat : %d", top1);
	    
	
	
	return 0;
}

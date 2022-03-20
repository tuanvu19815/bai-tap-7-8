#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int X;
	
	printf(" so tien muon rut la : ");
	scanf("%d", &X);
	
	if(X<200000 && X %50000 ==0){
	printf("lua ve ban eiii!");
}
	
	else {
	printf("lua khong ve duoc roi!");
	}
	return 0 ;
	

}

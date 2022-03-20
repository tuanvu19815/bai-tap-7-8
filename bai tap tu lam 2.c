#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char matkhaubaneii;
	printf("nhap matkhaubaneii");
	scanf("%c",&matkhaubaneii);
	switch(matkhaubaneii){
		case 'A':
		case 'a':
	       printf("Ada");
	       break;
	    case 'B':
		case 'b':
		   printf("Basic");
		   break;
		case 'C':
		case 'c':
		   printf("CODBOL");
		   break;
		case 'D':
		case 'd':
		   printf("dBASE III");
		   break;
		case 'F':
		case 'f':
		   printf("Fortran");
		   break;
		case'P':
		case'p':
		   printf("Pascal");
		   break;
		case 'V':
		case 'v':
		   printf("visual C++");		
	   	   break;
		default:
		printf("anh zai sai roi");
		break;
		}
		return 0;
	}
	
	
	



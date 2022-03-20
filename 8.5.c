#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
 	int num1, num2 ,res;
 	char op;
	num1 = 90;
 	num2 = 33;
 	op='-';
 	switch (op) {

	case'+':
 		res = num1 + num2;
 		printf("\nket qua cong 2 so la: %d", res);
 		break;
 	case'-':
 		res = num1 - num2;
 		printf("\nket qua tru 2 so la: %d", res);
 		break;
 	case'/':
 		res = num1 / num2;
 		printf("\nket qua chia 2 so la: %d", res);
 		break;
 	case'*':
 		res = num1 * num2;
 		printf("\nket qua nhan 2 so la: %d", res);	
 		break;
 	default:
 	printf("\n Invalid");
 	break;
 	}
	return 0;
}




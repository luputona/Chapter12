#include <stdio.h>

void main()
{
	int num1 = 100;
	int num2 = 100;
	int *pNum = NULL;

	pNum = &num1;
	(*pNum) += 30;

	pNum = &num2;
	(*pNum) -= 30;

	printf("num1 : %d , num2 : %d \n", num1, num2);



}
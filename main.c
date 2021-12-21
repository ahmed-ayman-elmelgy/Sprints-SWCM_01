#include <stdio.h>
#include <stdint.h>


int Fun_Add(void)
{
	
	/* inform the user with the program operation */
	printf(" welcome to the Add two number program \n ");
	
	/* ask user to enter the first number */
	printf("enter the first num : \n ");
	scanf("%d" , &firstNum );
	
	/* ask user to enter the second number */
	printf("enter the first num : \n ");
	scanf("%d" , &SecondNum );
	
	Sum = firstNum + SecondNum ;
	
	printf("the sum of  firstNum + SecondNum is = %d ", firstNum, SecondNum ,  Sum );
	
	
}


int main(void)
{
	
	
	int32_t SecondNum = 0 , firstNum =0 ,Sum= 0 ;
	Fun_Add();

	
	
	
	return 0 ;
	
}
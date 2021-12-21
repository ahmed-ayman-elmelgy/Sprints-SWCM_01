#include <stdio.h>
#include <stdint.h>


int Fun_Add(void)
{
	
	int32_t Sum = 0 , firstNum = 0 ,SecondNum = 0 ;

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

int Fun_Subtrack(void)
{
	int32_t Subtraction = 0 , firstNum = 0 ,SecondNum = 0 ;
	
	/* inform the user with the program operation */
	printf(" welcome to the subtraction two number program \n ");
	
	/* ask user to enter the first number */
	printf("enter the first num : \n ");
	scanf("%d" , &firstNum );
	
	/* ask user to enter the second number */
	printf("enter the first num : \n ");
	scanf("%d" , &SecondNum );
	
	Subtraction = firstNum - SecondNum ;
	
	printf("the subtraction of  firstNum - SecondNum is = %d ", firstNum, SecondNum ,  Subtraction );
	
	
}

int main(void)
{
	
	
	Fun_Add();

	
	
	
	return 0 ;
	
}
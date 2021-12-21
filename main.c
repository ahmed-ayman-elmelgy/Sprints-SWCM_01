#include <stdio.h>
#include <stdint.h>


int32_t Fun_Arithmetic( int32_t First_Num , int32_t Second_Num , int8_t operation)
{
	switch(operation)
	{
		case '+' :
				return First_Num + Second_Num ;
			break ; 
		
		case '-' :
				return First_Num - Second_Num ;
			break ; 		

		case '/' :
				return First_Num / Second_Num ;
			break ; 

		case '*' :
				return First_Num * Second_Num ;			

			break ; 	
		default : 
				printf("wrong operation /n") ;
				return 0 ;
			break ;			
	}
	
	
}


int main(void)
{
	
	int32_t SecondNum = 0 , firstNum =0 , result =0  ;
	int8_t operation = 0 ;
	
	/* inform the user with the program operation */
	printf(" welcome to the Add two number program \n ");
	
	/* ask user to enter the first number */
	printf("enter the first num : \n ");
	scanf("%d" , &firstNum );
	
	/* ask user to enter the second number */
	printf("enter the first num : \n ");
	scanf("%d" , &SecondNum );

	/* ask user to enter the second number */
	printf("enter operation Ex(+,-,*,/): \n ");
	scanf("%d" , &operation );	
	
	return Fun_Arithmetic(firstNum ,SecondNum ,operation);
	return 0 ;
	
}
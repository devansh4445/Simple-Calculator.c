#include<stdio.h>
int main()
{
	char operator;
	double num1,num2,result;

	printf(" Enter No.1\n = ");
	scanf("%lf",&num1);

	printf(" Enter an operator\n = ");
	scanf(" %c",&operator);

	printf(" Enter No.2\n = ");
	scanf("%lf",&num2);

	switch(operator) {

	case '+':
		result = num1 + num2;
		printf("Result=%lf\n",result);
		break;

	case '-':
		result = num1 - num2;
		printf("Result=%lf\n",result);
		break;

	case  '*':
		result = num1 * num2;
		printf("Result=%lf\n",result);
		break;

	case '/':
		if( num2 != 0 ) {
			result = num1 / num2;
			printf("Result=%lf\n",result);

		}
		else {
			printf("Error:");
		}
		break;
	default:
		printf("Inavalid  operator\n");

	}
	return 0;

}
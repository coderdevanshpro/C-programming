#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5;
	float n6,n7;
	printf("enter first number\n");
	scanf("%d",&n1);
	printf("enter second number\n");
	scanf("%d",&n2);
	n3=n1+n2;
	n4=n1-n2;
	n5=n1*n2;
	n6=(float)n1/n2;
	n7=n1%n2;
	printf("sum = %d\n",n3);
		printf("subtract = %d\n",n4);
			printf("multiplication = %d\n",n5);
				printf("division = %f\n",n6);
					printf("mdulus = %f\n",n7);
	return 0;
}

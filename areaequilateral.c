#include<stdio.h>

int main()
{
	int n1;
	float n3;

	printf("enter side\n");
	scanf("%d",&n1);
	
	n3=(1.732/4)*n1*n1*n1;
	printf("Area = %f\n",n3);
	return 0;
}

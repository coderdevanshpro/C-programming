#include<stdio.h>
int main()
{
	int n1;
	float n2;
	printf("enter temperature in C\n");
	scanf("%d",&n1);
	n2=(n1-32)*(5.0/9.0);
	

	printf("Temperature in F = %f\n",n2);
	
	

	return 0;
}

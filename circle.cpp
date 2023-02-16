#include<stdio.h>
int main()
{
	int n1,n2;
	double n3,n4,n5;
	printf("enter radius\n");
	scanf("%d",&n1);
	n2=2*n1;
	n3=2*(22.0/7.0)*n1;
	n4=(22.0/7.0)*n1*n1;
	printf("Diameter = %d\n",n2);
		printf("circumference = %lf\n",n3);

	printf("Area = %lf\n",n4);

	return 0;
}

#include<stdio.h>
int main()
{
	int n1;
	float n2,n3;
	printf("enter length in cm\n");
	scanf("%d",&n1);
	n2=n1/100.0;
	n3=n2/1000.0;

	printf("length in meters = %f\n",n2);
		printf("length in kilometers = %f\n",n3);

	

	return 0;
}

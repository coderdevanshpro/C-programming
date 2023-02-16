#include<stdio.h>

int main()
{
	int n1,n2,n3;
	float n4;

	printf("enter principle\n");
	scanf("%d",&n1);
		printf("enter rate\n");
	scanf("%d",&n2);
		printf("enter time\n");
	scanf("%d",&n3);
	
	n4=(n1*n2*n3)/100.0;
	
	printf("Simple Interest = %f\n",n4);

	return 0;
}

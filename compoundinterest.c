#include<stdio.h>
#include<math.h>

int main()
{
	int n1,n2,n3;
	float n4,n5;

	printf("enter principle\n");
	scanf("%d",&n1);
		printf("enter rate\n");
	scanf("%d",&n2);
		printf("enter time\n");
	scanf("%d",&n3);
	
	n4=n1*pow((1+(n2/100.0)),n3);
	n5=n4-n1;
	
	printf("Compound Interest = %f\n",n5);

	return 0;
}

#include<stdio.h>

int main()
{
	int n1,n2,n3,n4,n5,n6;
	float n7,n8;

	printf("enter marks of 1st subject out of 30\n");
	scanf("%d",&n1);
		printf("enter marks of 2nd subject out of 30\n");
	scanf("%d",&n2);
		printf("enter marks of 3rd subject out of 30\n");
	scanf("%d",&n3);
		printf("enter marks of 4th subject out of 30\n");
	scanf("%d",&n4);
		printf("enter marks of 5th subject out of 30\n");
	scanf("%d",&n5);
	n6=n1+n2+n3+n4+n5;
	n7=n6/5.0;
	n8=(n6/150.0)*100;
	printf("Total = %d\n",n6);
	printf("Average = %f\n",n7);
	printf("Percentage = %f\n",n8);
	return 0;
}

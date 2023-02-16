#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("enter length\n");
	scanf("%d",&n1);
	printf("enter breadth\n");
	scanf("%d",&n2);
	n3=2*(n1+n2);
	printf("perimeter = %d\n",n3);
	return 0;
}

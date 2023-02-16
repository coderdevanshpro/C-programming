#include<stdio.h>

int main()
{
	int n1,n2,n3;

	printf("enter first angle\n");
	scanf("%d",&n1);
	printf("enter second angle\n");
	scanf("%d",&n2);
	
	
	n3=180-(n1+n2);
	

	printf("third angle is %d\n",n3);
	
	

	return 0;
}

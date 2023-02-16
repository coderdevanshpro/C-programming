#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,n3;

	printf("enter number\n");
	scanf("%d",&n1);
	printf("enter power\n");
	scanf("%d",&n2);
	n3=pow(n1,n2);
	

	printf("answer is %d\n",n3);
	
	

	return 0;
}

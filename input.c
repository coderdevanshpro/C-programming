#include <stdio.h>
int main()
{
	int a;
	char ch;
	float f;
	double d;
	printf("enter a integer\n");
	scanf("%d",&a);
	printf("enter a float\n");
	scanf("%f",&f);
	printf("enter a double\n");
	scanf("%lf",&d);
	printf("enter a charachter\n");
	scanf("%c",&ch);
	printf("the number is %d\n",a);
		printf("the float is %f\n",f);
			printf("the double is %lf\n",d);
				printf("the charchter is %c",ch);
	return 0;
}

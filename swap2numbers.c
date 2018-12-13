#include<stdio.h>
int main()
{
	int a,b,t;
	printf(" Enter two numbers \n");
	scanf("%d %d",&a,&b);
	printf("\n Before swapping : %d %d ",a,b);
	/* first method using third variable */
	t=a;
	a=b;
	b=t;
	printf("\n After swapping first method : %d %d ",a,b);
	
	/* second method without using third variable */
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After swapping second method : %d %d",a,b);

	/* third method using XOR */
	a^=b;
	b^=a;
	a^=b;
	printf("\n After swapping third method : %d %d",a,b);

	/* fourth method */
	a=a+b-(b=a);
	printf("\n After swapping fourth method : %d %d\n",a,b);
	return 0;
}

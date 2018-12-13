#include<stdio.h>
#define MAX 100
int main()
{
	int arr[MAX],n,i,temp;
	printf("Enter total number of elements:");
	scanf("%d",&n);
	//value of n must be even
	if(n%2!=0)
	{
		printf("Total number of elements should be EVEN\n");
		return 1;
	}
	//read array elements
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	//Swap adjacent elements
	for(i=0;i<n;i+=2)
	{
		temp=arr[i];
		arr[i]=arr[i+1];
		arr[i+1]=temp;
	}
	printf("\n Array elements after swapping\n");
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}
	

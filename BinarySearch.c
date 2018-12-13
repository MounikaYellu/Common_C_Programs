#include<stdio.h>
//function: BinaryrSearch()
int BinaryrSearch(int x[],int n,int item)
{
	int L=0; //Lower Limit
	int U=n-1; //Upper Limit
	int mid;
	while(L<U)
	{
		mid=(L+U)/2;
		if(x[mid]==item) return mid;
		else if(x[mid]<item) L=mid+1;
		else if(x[mid]>item) U=mid-1;
	}
	return -1;
}
int main()
{
	int num=0,pos=0;
	int ar[10],i;
	printf("\n Enter Ten elements (in ASC order):\n");
	for(i=0;i<10;i++)
		scanf("%d",&ar[i]);
	printf(" \n Enter element to be searched:");
	scanf("%d",&num);
	pos=BinaryrSearch(ar,10,num);
	if(pos!=-1) printf("\n Item found @%02d location.\n",pos);
	else printf("\n Item not found \n");
	printf("\n");
	return 0;
}


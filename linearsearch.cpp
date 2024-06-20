#include<stdio.h>
int linearsearch(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i] == x);
		
			return i;
	}
		return -1;
}
int main()
{
	int arr[]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int x=3;
	int result= linearsearch(arr,size,x);
	if(result!= -1)
	{
		printf("element is present at index %d \n",result);
	}
	else
	{
		printf(" element is not found \n");
	}
	return 0;
}

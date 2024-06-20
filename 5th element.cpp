#include<stdio.h>
int display5thelement(int arr[],int size)
{
	for(int i=4;i<size;i+=5)
	{
		printf("element at position %d : %d \n",i+1,arr[i]);
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("original array");
	for(int i=0;i<size;i++)
	{
		printf("%d",&arr[i]);
	}
	printf("element at 5th position :\n");
	display5thelement(arr,size);
	return 0;
}

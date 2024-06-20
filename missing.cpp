#include<stdio.h>
int displaymissing(int arr[],int n)
{
int total_sum=(n*(n+1))/2;
int array_sum=0;
for(int i=0;i<n-1;i++)
{
	array_sum+=arr[i];
}
return total_sum-array_sum;
}
int main()
{
	int arr[]={1,2,4,5,6};
	int n=6;
	int missing=displaymissing(arr,n);
	printf("missing element is %d \n",missing);
	return 0;
}

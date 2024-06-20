#include<stdio.h>
int main()
{
	int rows=3;
	int cols=3;
	int matrix[3][3]={
	  {1,2,3},
	  {4,5,6},
	  {7,8,9}
	  };
	  int maxelement=matrix[0][0];
	  for(int i=0;i<rows;i++)
	  {
	  	for(int j=0;j<cols;j++)
	  	{
	  	if(matrix[i][j]>maxelement)
	  	{
		  
		  maxelement=matrix[i][j];	
	}
		  }
	  }
	  printf("max element is %d \n",maxelement);
	  return 0;
	  
}

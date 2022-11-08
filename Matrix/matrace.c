#include<stdio.h>
int main()
{
	int rows,cols,i,j,sum=0;
	printf("\n\n\t\tPlease enter the number of rows and columns of the matrix : ");
	scanf(" %d %d",&rows,&cols);
	if(rows==cols)
	{
		int a[rows][cols];
		printf("\n\n\t\tPlease enter the elements in 2D format : \n\t\t");
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				scanf(" %d",&a[i][j]);
			}printf("\n\t\t");
		}
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				if(i==j)
				{
					sum+=a[i][j];
				}
			}
		}
		printf("\n\n\t\tThe trace of the matrix is : %d \n\n\n",sum);
	}else{
		printf("\n\n\t\tSince the matrix is not square matrix, trace cannot be found\n\n\n");
	}
	return 0;
}

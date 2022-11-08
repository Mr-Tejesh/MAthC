/*
	This program is to find multiplication of 2 matrices
	First enter order of matrix 1 and then matrix 2
	If the rule of multiplication is followed
	Then you need to enter elements of matrix 1 and then Matrix 2
	Just enter the input in the 2D format like on paper
*/
#include<stdio.h>
int main()
{
	int M,N,X,Y,k,sum;
	printf("\n\n\t\tPlease enter the rows and columns of Matrix - A : ");
	scanf(" %d %d",&M,&N);
	printf("\n\n\t\tPlease enter the rows and columns of Matrix - B : ");
	scanf(" %d %d",&X,&Y);
	if(N==X)
	{
		k=N=X;
		int A[M][k],B[k][Y],C[M][Y];
		printf("\n\n\t\tPlease enter the elements of Matrix - A : ");
		for(int i=0;i<M;i++)
		{
			for(int j=0;j<k;j++)
			{
				scanf(" %d",&A[i][j]);
			}
		}
		printf("\n\n\t\tPlease enter the elements of Matrix - B : ");
        	for(int i=0;i<k;i++)
	        {
        	        for(int j=0;j<Y;j++)
	                {
        	                scanf(" %d",&B[i][j]);
	                }
        	}

		for(int i=0;i<M;i++)
		{
			for(int j=0;j<Y;j++)
			{
				sum=0;
				for(int z=0;z<k;z++)
				{
					sum+=A[i][z]*B[z][j];
				}C[i][j]=sum;
			}
		}
		printf("\n\n\t\tThe elements of Matrix - C in 2D format : ");
	        for(int i=0;i<M;i++)
	        {
			printf("\n\n\t\t");
        	        for(int j=0;j<Y;j++)
	                {
	                        printf("%-6d",C[i][j]);
        	        }
	        }printf("\n\n\n");
	}
	else
	{
		printf("\n\n\t\tMultiplication is not possible here coz the following test not passed\n\n\t\tThe columns of Matrix - A and rows of Matrix - B are not equal\n\n");
	}
	return 0;

}

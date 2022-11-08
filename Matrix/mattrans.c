/*
	This program is to find transpose of a matrix
	First enter the order of matrix
	And then add the elements
	Finally you get the transpose as output
*/
#include<stdio.h>
int main()
{
	int M,N,i,j;
	printf("\n\n\t\tPlease enter the size of matrix (m * n) : ");
	scanf(" %d %d",&M,&N);
	int A[M][N],B[N][M];
	printf("\n\n\t\tPlease enter the elements of matrix in 2D format : ");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf(" %d",&A[i][j]);
		}
	}
        for(i=0;i<M;i++)
        {
                for(j=0;j<N;j++)
                {
			B[j][i]=A[i][j];
                }
        }
	printf("\n\n\t\tThe transpose of the above matrix is : ");
        for(i=0;i<N;i++)
        {
		printf("\n\n\t\t");
                for(j=0;j<M;j++)
                {
			printf(" %6d",B[i][j]);
                }
        }
	printf("\n\n\n");return 0;
}

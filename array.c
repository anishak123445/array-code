#include<stdio.h>
#include<conio.h>
int main()
{
	int num[20] [20],i,j,sum=0,sum1=0,n;
	printf("enter number of rows and column in a matrix");
	scanf("%d",&n);
	printf("enter elements of matrix..\n");
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{printf("enter elements in pocket [%d] [%d] \t",i,j);
	scanf("%d",&num[i][j]);
	}
	}
	printf("matrix is ....\n");
	for(i=0;i<n;i++)
	{ for(j=0;j<n;j++)
	{
		printf("%d",num[i][j]);
	}
	printf("\n");
	}
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{ if(i==j)
	{sum=sum+num[i] [j];
	}
	if(i+j==n-1)
	{sum1=sum1+num[i][j];
	}
	}
	}
	printf("diagonal sum of matrix are %d \t and %d",sum,sum1);
	getch();
}

#include<stdio.h>

void main()
{
	int a,b,i,j,max = 0;
	
	printf("Enter number of rows :- ");
	scanf("%d",&a);
	
	printf("Enter number of colums :- ");
	scanf("%d",&b);
	
	int x[a][b];
	
	printf("Enter array's elements :- \n");
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("x[%d][%d] : ",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	
		for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			if(x[i][j]>max)
			{
				max = x[i][j];
			}
		}
		
	}
    	printf("Largest number is := %d ",max);
}
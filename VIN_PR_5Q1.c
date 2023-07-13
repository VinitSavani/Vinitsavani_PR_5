#include<stdio.h>

void main()
{
	int a,i;
	
	printf("Enter the array's size :- ");
	scanf("%d",&a);
	
	int x[a];
	
	printf("Enter the array's elements : \n");
	
	for(i=0;i<a;i++)
	{
		printf("x[%d] : ",i);
		scanf("%d",&x[i]);
	}
	
	printf("\nNegative elements from an array :- ");
	for(i=0;i<a;i++)
	{
		if(x[i]<0)
		{
			printf("%d,",x[i]);
		}
	}
}

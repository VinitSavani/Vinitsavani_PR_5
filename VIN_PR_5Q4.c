#include<stdio.h>

void main()
{

  int a,b,i,j,v,s;

  printf("Enter the size of Row =   ");
  scanf("%d",&a);

  printf("Enter the size of column =   ");
  scanf("%d",&b);

  int A[a][b];

  printf("Enter the array A's elements\n");
  
  for(i=0;i<a;i++)
  {
    for(j=0;j<b;j++)
	{
     printf("a[%d][%d] =  ",i,j);
     scanf("%d",&A[j][i]);
    }
  }

  int y=0,x=0;
  
  printf("Enetr row number : ");
  scanf("%d",&v);

  printf("Elements of row %d: ",v);
  
  for(i=0;i<a;i++)
  {
    if(i==v)
	{
        for(j=0;j<b;j++)
		{ 
          printf("%d ",A[i][j]);
            y = y + A[i][j];
        }
    }
  }
  printf("\nThe sum of %d row is : %d\n",v,y);

  printf("Enter the column number : ");
  scanf("%d",&s);

  printf("Elements of colum %d: ",s);

  for(i=0;i<a;i++)
  {
  	for(j=0;j<b;j++)
		{
		 	if(j==s)
		 	{
			   printf("%d ",A[i][j]);
               x = x + A[i][j];
             }
        }
    
   }
    printf("\nThe sum of %d colum is : %d",s,x);

}
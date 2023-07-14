#include<stdio.h>

void main()
{

  int a,i,j,w = 0;
 
  printf("Enter the size of Row & colum =   ");
  scanf("%d",&a);

  int A[a][a];

  printf("Enter the array's elements\n");
  for(i=0;i<a;i++)
  {
    for(j=0;j<a;j++)
 	 {
    
       printf("a[%d][%d] =  ",i,j);
       scanf("%d",&A[i][j]);
     }
   }

  for(i=0;i<a;i++)
  {
    for(j=0;j<a;j++)
	{
      printf("%d",A[j][i]);
        
    }
  printf("\n");
}

}
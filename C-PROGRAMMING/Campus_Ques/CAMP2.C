//Scan and Print DDA using Array of Pointers
#include<stdio.h>
void main()
{
  int x[3][4],i,j,*p[3];
  printf("\nEnter Array");
  for(i=0;i<3;i++)
  {
    p[i]=x[i];
    for(j=0;j<4;j++)
    {
      scanf("%d",(p[i]+j));
    }
  }
  printf("\nEntered Array is:-\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%d\t",*(p[i]+j));
    }
    printf("\n");
  }
}
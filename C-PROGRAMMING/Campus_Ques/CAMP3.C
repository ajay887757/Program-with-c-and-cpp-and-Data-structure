//Scan and Print DDA using Array of Pointers
#include<stdio.h>
void main()
{
  int x[3][4],i,*p;
  p=&x[0][0];
  printf("\nEnter Array");
  for(i=0;i<12;i++)
  {
    scanf("%d",(p+i));
  }
  printf("\nEntered Array is:-\n");
  for(i=0;i<12;i++)
  {
    if(i%4==0)
      printf("\n");
    printf("%d\t",*(p+i));
  }
}
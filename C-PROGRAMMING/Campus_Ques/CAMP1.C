//Scan and Print 3 Variables Using Loop
#include<stdio.h>
void main()
{
  int a,b,c,i,*p[3];
  p[0]=&a;
  p[1]=&b;
  p[2]=&c;
  printf("\nEnter a, b & c");
  for(i=0;i<3;i++)
  {
    scanf("%d",p[i]);
  }
  printf("\nEntered Values of a, b & c are:-");
  for(i=0;i<3;i++)
  {
    printf("%d\t",*p[i]);
  }
}
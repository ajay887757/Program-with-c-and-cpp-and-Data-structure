//WAP to Calculate Sum of Series
#include<stdio.h>
#include<math.h>
void main()
{
  int x,no,i,j;
  long f,s;
  float sum;
  printf("\nEnter no of step and value of x:");
  scanf("%d%d",&no,&x);
  for(i=0;i<no;i++)
  {
	 s=0;
	 for(j=0;j<=i;j++)
		s=s+pow(x,j);
	 for(j=1;f=1;j<=i;f*=j++);
		sum=sum+(float)s/f;
  }
  printf("\nSm of series =%f",sum);
  getch();
}
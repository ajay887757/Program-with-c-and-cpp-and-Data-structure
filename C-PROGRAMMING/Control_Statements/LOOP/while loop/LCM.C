//WAP to Calculate LCM of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
  int t,n1,n2;
  int lcm,i=2;
  clrscr();
  printf("\nEnter two no:");
  scanf("%d%d",&n1,&n2);
  lcm=n1*n2;
  while(i<=n1&&i<=n2)
  {
	 if(lcm%i==0)
	 {
		t=lcm/i;
		if(t%n1==0&&t%n2==0)
		{
		  lcm=t;
		  i=1;
		}
	 }
	 i++;
  }
  printf("\nLCM=%d",lcm);
  getch();
}

//WAP to Find Biggest number among given five numbers using Function
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,l,m;
	int big(int,int);
	printf("\nEnter x,y,z,l and m:");
	scanf("%d%d%d%d%d",&x,&y,&z,&l,&m);
	printf("\n biggest no=%d",big(big(big(big(x,y),z),l),m));
	getch();
}
int big(int a,int b)
{
  if(a>b)
	 return a;
  else
	 return b;
}



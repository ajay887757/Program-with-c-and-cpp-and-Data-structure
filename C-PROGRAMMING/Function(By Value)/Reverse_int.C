#include<stdio.h>
#include<conio.h>
void main()
{
int no;
void rev(int);
clrscr();
printf("\nEnter any no");
scanf("%d",&no);
  rev(no);
}
void rev(int n)
{
int no1=0,r;
while(n>0)
{
r=n%10;
no1=no1*10+r;
n/=10;
}
printf("\n rev no=%d",no1);
}
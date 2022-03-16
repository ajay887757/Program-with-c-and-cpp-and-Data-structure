//WAP to Print Fibonacci Series upto n terms using Function
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  void fibo(int);
  clrscr();
  printf("Enter No. of Terms: ");
  scanf("%d",&no);
  fibo(no);
  getch();
}
void fibo(int n)
{
  int i=0,t1=0,t2=1,t3;
  while(i<n)
  {
	 t3=t1+t2;
	 printf("%d\t",t3);
	 t1=t2;
	 t2=t3;
	 i++;
  }
}
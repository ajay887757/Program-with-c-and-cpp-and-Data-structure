//WAP to check Entered number is prime or not using Function
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  clrscr();
  printf("\nEnter a no:");
  scanf("%d",&no);
  if(prime(no))
	 printf("%d is prime",no);
  else
	 printf("%d is not prime",no);
  getch();
}

prime(int n)
{
  int i=2;
  while(i<n)
  {
	 if(n%i==0)
		return 0;
	 i++;
  }
  return 1;
}
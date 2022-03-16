//WAP to check Entered number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
  int no, i=2;
  clrscr();
  printf("\nEnter any number:");
  scanf("%d",&no);
  while(i<no)
  {
	 if(no%i==0)
	 {
		printf("no is prime");
		break;
	 }
	 i++;
  }
  if(i==no)
	 printf(" not prime");
  getch();
}
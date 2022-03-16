//WAP to Convert an Integer into String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[30];
  int i=0,r,x;
  clrscr();
  printf("\nEnter any no");
  scanf("%d",&x);
  while(x>0)
  {
	 r=x%10;
	 str[i]=r+48;
	 x/=10;
	 i++;
  }
  str[i]='\0';
  strrev(str);
  puts(str);
  getch();
}
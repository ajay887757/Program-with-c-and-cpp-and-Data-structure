//WAP to check Entered Password is Valid or Not
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[20]="aimpoint";
  char str2[20],ch;
  int i=0;
  clrscr();
  printf("\nEnter youre password:");
  while((ch=getch())!=13)
  {
	 if(ch==8)
	 {
		printf("\b");
		printf(" ");
		printf("\b");
		i--;
		continue;
	 }
	 printf("*");
	 str2[i]=ch;
	 i++;
  }
  str2[i]='\0';
  if(strcmp(str2,str1)==0)
	 printf("\nPasssword is valid..");
  else
	 printf("\nInvalid Passsword ..");
  getch();
}
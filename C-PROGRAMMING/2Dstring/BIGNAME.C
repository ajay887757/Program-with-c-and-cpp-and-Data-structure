//WAP to Find Biggest String in 10 Strings
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[10][20];
  char big[20]='\0';
  char big1[20]='\0';
  int i=0;
  clrscr();
  printf("\nEnter 10 names:");
  for(i=0;i<10;i++)
	 gets(str[i]);
  for(i=0;i<10;i++)
  {
	  if(strcmp(str[i],big)>0)
	  {
		 strcpy(big,str[i]);
	  }
  }
  for(i=0;i<10;i++)
  {
	 if(strlen(str[i])>strlen(big1))
	 {
		strcpy(big1,str[i]);
	 }
  }
  printf("\n alphabatically biggest name=");
  puts(big);
  printf("\n lenthwise biggest name=");
  puts(big1);
  getch();
}
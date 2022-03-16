//WAP to Concat Two Strings
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j=0;
  char str1[30],str2[15];
  clrscr();
  printf("\nEnter two string:");
  gets(str1);
  gets(str2);
  i=strlen(str1);
  while(str2[j]!='\0')
  {
	 str1[i]=str2[j];
	 i++;
	 j++;
  }
  str1[i]='\0';
  printf("\nAfter Concatination : ");
  puts(str1);
  getch();
}

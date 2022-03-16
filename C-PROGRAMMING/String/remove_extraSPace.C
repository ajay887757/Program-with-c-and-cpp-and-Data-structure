//WAP to Remove Extra Spaces from a String
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[50];
  int i=0,j;
  clrscr();
  printf("\nEnter a string:");
  gets(str);
  while(str[i]==' ')
  {
	 if(str[i]==' ')
	 {
		for(j=i;str[j]!='\0';j++)
		str[j]=str[j+1];
		i--;
	 }
	 i++;
  }
  while(str[i]!='\0')
  {
	 if(str[i]==' '&&str[i+1]==' ')
	 {
		for(j=i;str[j]!='\0';j++)
		  str[j]=str[j+1];
		i--;
	 }
	 i++;
  }
  puts(str);
  getch();
}
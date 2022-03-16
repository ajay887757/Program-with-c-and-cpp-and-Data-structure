//WAP to Compare two Strings
#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[20],str2[20];
  int i=0,j=0,t;
  clrscr();
  printf("\nEnter two string:");
  gets(str1);
  gets(str2);
  for( ;str1[i]!='\0'||str2[j]!='\0';i++,j++)
  {
	 if(str1[i]!=str2[i])
		t=str1[i]-str2[i];
	 if(t>0)
	 {
		printf("\nstr1 is big");
		return;
	 }
	 else if(t<0)
	 {
		printf("\nstr2 is big");
		return;
	 }
  }
  printf("\nboth are equal");
  getch();
}

//WAP to check a String is Substring of another or not
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[50],str1[20];
  int i,j,k;
  int f=0;
  clrscr();
  printf("\nEnter a string:");
  gets(str);
  printf("\nenter searching string:");
  gets(str1);
  for(i=0;str[i];i++)
  {
	 if(str1[0]==str[i])
	 {
		for(k=i+1,j=1;str1[j]!='\0';j++,k++)
		{
		  if(str[k]!=str1[j])
			 break;
		}
		if(str1[j]=='\0')
		{
		  printf("\n'%s' is a sub string of '%s' and position is %d",str1,str,i);
		  f=1;
		}
	 }//end of  if(str1[0]==str[i])
  }//end of i loop
  if(f==0)
	 printf("\n'%s' is not a sub string of '%s'",str1,str);
  getch();
}
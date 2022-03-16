//Write char data into a text file
#include<stdio.h>
#include<conio.h>
void main()
{
  char str[100];
  int i=0;
  FILE *fp;
  clrscr();
  printf("\nEnter a String:- ");
  gets(str);
  fp=fopen("tstr.txt","w");
  if(fp==NULL)
  {
    printf("Unable to create a file...");
    return;
  }
  while(str[i]!='\0')
  {
    putc(str[i],fp);
    i++;
  }
  printf("\n One file created");
  fclose(fp);
  getch();
}
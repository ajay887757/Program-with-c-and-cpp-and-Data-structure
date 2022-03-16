//Read the content of a text file and display on monitor
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  int i;
  FILE *fp;
  char fname[30];
  printf("\nEnter file name which content you want to read:");
  scanf("%s",fname);
  fp=fopen(fname,"r");
  if(fp==NULL)
  {
    printf("\nUnable to open file...");
    return;
  }
  while((ch=getc(fp))!=EOF)
  {
    printf("%c",ch);
  }
  fclose(fp);
}
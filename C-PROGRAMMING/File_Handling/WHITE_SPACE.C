//WAP to count White Spaces('\n', '\t', ' ',backspace etc.)
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
  FILE *fp;
  int np=0;
  char fname[20],ch;
  clrscr();
  printf("Enter File Name");
  scanf("%s",fname);
  fp=fopen(fname,"r");
  if(fp==NULL)
  {
    printf("Unable to open file");
    return;
  }
  while((ch=getc(fp))!=EOF)
  {
    if(ispunct(ch))
      np++;
  }
  printf("\nNo of Punctuation=%d",np);
  fclose(fp);
}
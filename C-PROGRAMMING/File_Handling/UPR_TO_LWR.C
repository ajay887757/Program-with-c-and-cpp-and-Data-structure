//WAP to Convert any Upper Case file into Lower Case file
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
  FILE *fp1,*fp2;
  char fname1[30],ch;
  clrscr();
  printf("Enter Source File Name");
  scanf("%s",fname1);
  fp1=fopen(fname1,"r");
  if(fp1==NULL)
  {
    printf("Unable to open file");
    return;
  }
  fp2=fopen("Temp","w");
  if(fp2==NULL)
  {
    printf("Unable to open file");
    return;
  }
  while((ch=getc(fp1))!=EOF)
  {
    ch=tolower(ch);
    putc(ch,fp2);
  }
  fclose(fp1);
  fclose(fp2);
  remove(fname1);
  rename("Temp",fname1);
  printf("File Converted");
}
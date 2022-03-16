WAP to Concat two files into third file
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
  FILE *fp1,*fp2,*fp3;
  char fname1[30],fname2[30],fname3[30],ch;
  clrscr();
  printf("Enter First File Name");
  scanf("%s",fname1);
  fp1=fopen(fname1,"r");
  if(fp1==NULL)
  {
    printf("Unable to open First file");
    return;
  }
  printf("Enter Second File Name");
  scanf("%s",fname2);
  fp2=fopen(fname2,"r");
  if(fp2==NULL)
  {
    printf("Unable to open Second file");
    return;
  }
  printf("Enter Target File Name");
  scanf("%s",fname3);
  fp3=fopen(fname3,"w");
  if(fp3==NULL)
  {
    printf("Unable to open Target file");
    return;
  }
  while((ch=getc(fp1))!=EOF)
  {
    putc(ch,fp3);
  }
  while((ch=getc(fp2))!=EOF)
  {
    putc(ch,fp3);
  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  printf("File Concatinated");
}
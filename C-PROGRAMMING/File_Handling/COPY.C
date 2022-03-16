//Read the content of a text file and write into another file
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch,fname[30],fname1[30];
  int i;
  FILE *fp,*fp1;
  printf("\nEnter Source file name:");
  scanf("%s",fname);
  printf("\nEnter Destination file name:");
  scanf("%s",fname1);
  fp=fopen(fname,"r");
  fp1=fopen(fname1,"w");
  if(fp==NULL)
  {
    printf("Unable to open Source file...");
    return;
  }
   if(fp1==NULL)
  {
    printf("Unable to open Destination file...");
    return;
  }
  while((ch=getc(fp))!=EOF)
    putc(ch,fp1);
  fclose(fp);
  fclose(fp1);
  printf("One file Copied");
}
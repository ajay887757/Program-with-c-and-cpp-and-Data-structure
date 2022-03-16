//Read integer from a file and display on monitor
#include<stdio.h>
#include<conio.h>
void main()
{
  int no;
  FILE *fp;
  printf("\nEntry in files are:\n");
  fp=fopen("number","rb");
  if(fp==NULL)
  {
    printf("\nUnable to open file...");
    return;
  }
  while(!feof(fp))
  {
    no=getw(fp);
    printf(" %d",no);
  }
  fclose(fp);
}
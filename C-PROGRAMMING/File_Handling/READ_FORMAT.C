//Read formatted data from file
#include<stdio.h>
#include<conio.h>
void main()
{
  int ino,price,tno,i;
  char name[30];
  FILE *fp;
  clrscr();
  fp=fopen("item","r");
  if(fp==NULL)
  {
    printf("\nUnable to open file...");
    return;
  }
  while(fscanf(fp,"%d%s%d",&ino,name,&price)!=EOF)
    printf("\n%d %s %d",ino,name,price);
  fclose(fp);
  getch();
}
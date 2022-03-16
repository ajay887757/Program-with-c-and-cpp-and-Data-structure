//Write formatted data into file
#include<stdio.h>
#include<conio.h>
void main()
{
  int ino,price,tno,i;
  char name[30];
  FILE *fp;
  clrscr();
  printf("\n\nHow many records write into file? ");
  scanf("%d",&tno);
  fp=fopen("item","w");
  if(fp==NULL)
  {
    printf("\nUnable to open file...");
    return;
  }
  for(i=1;i<=tno;i++)
  {
    printf("Enter %d Record (Item no,name,price): ",i);
    scanf("%d%s%d",&ino,name,&price);
    fprintf(fp,"\n%d %s %d",ino,name,price);
  }
  fclose(fp);
  printf("\n One file created");
  getch();
}
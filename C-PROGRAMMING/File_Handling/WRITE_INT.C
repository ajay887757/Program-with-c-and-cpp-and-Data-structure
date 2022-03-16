//Write some integer into a file
#include<stdio.h>
#include<conio.h>
void main()
{
  int no,tno,i;
  FILE *fp;
  printf("\nHow many no write into file");
  scanf("%d",&tno);
  fp=fopen("number","wb");
  if(fp==NULL)
  {
    printf("Unable to open file");
    return;
  }
  for(i=1;i<=tno;i++)
  {
    printf("\nEnter %d number : ",i);
    scanf("%d",&no);
    putw(no,fp);
  }
  fclose(fp);
  printf("\nOne file created");
}
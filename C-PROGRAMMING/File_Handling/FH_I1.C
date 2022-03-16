//WAP to create a file of int and write 30 numbers
#include<stdio.h>
void main()
{
  int no,i;
  FILE *fp;
  fp=fopen("number","wb");
  if(fp==NULL)
  {
    printf("\nUnable to Open File");
    return;
  }
  for(i=1;i<=30;i++)
  {
    printf("Enter %d Number",i);
    scanf("%d",&no);
    putw(no,fp);
  }
  fclose(fp);
  printf("\nOne File Created");
}
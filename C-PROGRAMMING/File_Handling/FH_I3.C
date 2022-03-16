//Open file "number" in "r" and create three files even, odd and prime in "w".
//Read one by one int from "number" and write according status.
#include<stdio.h>
void main()
{
  int no,i;
  FILE *fp1,*fp2,*fp3,*fp4;
  fp1=fopen("number","rb");
  if(fp1==NULL)
  {
    printf("\nUnable to number File");
    return;
  }
  fp2=fopen("prime","rb");
  if(fp2==NULL)
  {
    printf("\nUnable to prime File");
    return;
  }
  fp3=fopen("even","rb");
  if(fp3==NULL)
  {
    printf("\nUnable to even File");
    return;
  }
  fp4=fopen("odd","rb");
  if(fp4==NULL)
  {
    printf("\nUnable to odd File");
    return;
  }
  printf("\nContent of number file\n");
  while(!feof(fp1))
  {
    no=getw(fp1);
    if(!feof(fp1))
      printf("%d\t",no);
  }
  printf("\nContent of prime file\n");
  while(!feof(fp2))
  {
    no=getw(fp2);
    if(!feof(fp2))
      printf("%d\t",no);
  }
  printf("\nContent of even file\n");
  while(!feof(fp3))
  {
    no=getw(fp3);
    if(!feof(fp3))
      printf("%d\t",no);
  }
  printf("\nContent of odd file\n");
  while(!feof(fp4))
  {
    no=getw(fp4);
    if(!feof(fp4))
      printf("%d\t",no);
  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  fclose(fp4);
}
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
    printf("\nUnable to Source File");
    return;
  }
  fp2=fopen("prime","wb");
  fp3=fopen("even","wb");
  fp4=fopen("odd","wb");
  if(fp2==NULL&&fp3==NULL&&fp4==NULL)
  {
    printf("\nUnable to Open one of the Target File");
    return;
  }
  while(!feof(fp1))
  {
    no=getw(fp1);
    if(!feof(fp1))
    {
      if(prime(no))
	putw(no,fp2);
      if(even_odd(no))
	putw(no,fp3);
      else
	putw(no,fp4);
    }
  }
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  fclose(fp4);
  printf("\nFiles Created");
}
int prime(int n)
{
  int i=2;
  while(i<n)
  {
    if(n%i==0)
      return 0;
    i++;
  }
  if(n<2)
    return 0;
  else
    return 1;
}
int even_odd(int n)
{
  if(n%2==0)
    return 1;
  else
    return 0;
}
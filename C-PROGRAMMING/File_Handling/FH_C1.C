//WAP to open any text file and count No. of Alphabate, No. of Digits,
//No. of Upper Case, No. of Lower Case, No. of Punctuation, No. of Digits,
//No. of Spaces.
#include<stdio.h>
#include<ctype.h>
#include<conio.h>
void main()
{
  FILE *fp;
  int na=0,nd=0,nu=0,nl=0,np=0,ns=0,nan=0;
  char fname[20],ch;
  clrscr();
  printf("Enter File Name");
  scanf("%s",fname);
  fp=fopen(fname,"r");
  if(fp==NULL)
  {
    printf("Unable to open file");
    return;
  }
  while((ch=getc(fp))!=EOF)
  {
    if(isalpha(ch))
      na++;
    if(isdigit(ch))
      nd++;
    if(isalnum(ch))
      nan++;
    if(isupper(ch))
      nu++;
    if(islower(ch))
      nl++;
    if(isspace(ch))
      ns++;
    if(ispunct(ch))
      np++;
  }
  printf("\nNo of Alphabate=%d",na);
  printf("\nNo of Digits=%d",nd);
  printf("\nNo of AlphaNumeric=%d",nan);
  printf("\nNo of Upper Case=%d",nu);
  printf("\nNo of Lower Case=%d",nl);
  printf("\nNo of Spaces=%d",ns);
  printf("\nNo of Punctuation=%d",np);
  fclose(fp);
}
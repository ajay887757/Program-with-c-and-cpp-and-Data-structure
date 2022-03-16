//WAP to Enter 30 Characters Using Loop and count
//1. Number of Alphabate
//2. Number of Digits
//3. Number of Spaces
//4. Number of Punctuation
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
  char ch;
  int na=0,nd=0,ns=0,np=0;
  clrscr();
  void count(int *,int *,int *,int *)
  count(&na,&nd,&ns,&np);
  printf("\n no of Alphabates=%d",na);
  printf("\n no of Digits=%d",nd);
  printf("\n no of Spaces=%d",ns);
  printf("\n no of Punctuations=%d",np);
  getch();
}
void count(int *a,int *b,int *c,int *d)
{
  int i=1;
  char ch;
  while(i<=30)
  {
	 printf("enter %d char",i);
	 fflush(stdin);
	 scanf("%c",&ch);
	 if(isalpha(ch))
		(*a)++;
	 if(isdigit(ch))
		(*b)++;
	 if(isspace(ch))
		(*c)++;
	 if(ispunct(ch))
		(*d)++;
	 i++;
  }
}

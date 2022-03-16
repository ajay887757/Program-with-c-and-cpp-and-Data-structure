//WAP to Enter 30 Characters Using Loop and count
//1. Number of Alphabate
//2. Number of Digits
//3. Number of AlphaNumeric
//4. Number of Upper Case
//5. Number of Lower Case
//6. Number of Spaces
//7. Number of Punctuation
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
  char ch;
  int na=0,nd=0,nan=0,nu=0,nl=0,ns=0,np=0,i=1;
  clrscr();
  while(i<=30)
  {
	 printf("enter %d char",i);
	 fflush(stdin);
	 scanf("%c",&ch);
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
	 i++;
  }
  printf("\n no of Alphabate=%d",na);
  printf("\n no of Digits=%d",nd);
  printf("\n no of AlphaNumeric=%d",nan);
  printf("\n no of Upper=%d",nu);
  printf("\n no of Lower=%d",nl);
  printf("\n no of Space=%d",ns);
  printf("\n no of Punctuation=%d",np);
  getch();
}


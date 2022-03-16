//WAP to Convert an Integer into Hexa Decimal
#include<stdio.h>
#include<conio.h>
void main()
{
  int x[4],no,i=0;
  clrscr();
  printf("enter any no");
  scanf("%d",&no);
  while(no>0)
  {
	 x[i++]=no%16;
	 no/=16;
  }
  i--;
  printf("\n hexadecimal no is is:");
  for( ;i>=0;i--)
  {
	 if(x[i]>9)
		printf(" %c",x[i]+55);
	 else
		printf(" %d",x[i]);
  }
}
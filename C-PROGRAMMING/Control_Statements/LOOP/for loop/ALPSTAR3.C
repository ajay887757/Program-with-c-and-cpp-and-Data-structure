//ABCDCBA
//ABC CBA
//AB   BA
//A     A
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,no;
	clrscr();
	printf("\nEnter a no:");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		for(j=65; j<65+no-i ;j++ )
		  printf("%c",j);
		for( j=0; j<2*i-1;j++)
		  printf(" ");
		for(j=64+no-i  ; j>=65 ;j-- )
		{
		  if(!(i==0 && j==64+no-i))
			 printf("%c",j);
		}
		printf("\n");
	}
	getch();
}

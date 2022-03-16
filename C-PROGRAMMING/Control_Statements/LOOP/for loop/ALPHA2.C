//   A
//  BA
// CBA
//DCBA
#include<stdio.h>
#include<conio.h>
void main()
{
    int no,i,j;
    clrscr();
    printf("\nEnter no of row:");
	 scanf("%d",&no);
	 for(i=0;i<no;i++)
	 {
		for(j=0;j<no-i;j++)
		  printf("  ");
		for( j=65+i ;  j>=65 ;j--  )
		  printf(" %c", j);
		printf("\n");
	 }
    getch();
}
//WAP to Perform Arithmatic Operation using switch(char)
#include<stdio.h>
#include<conio.h>
void main()
{
  int x,y,ch;
  do
  {
	 clrscr();
	 printf("\nPress:\n");
	 printf("\n '1'   Addition");
	 printf("\n '2'   Subtraction");
	 printf("\n '3'   Multiplication");
	 printf("\n '4'   Division");
	 printf("\n '5'   Mod");
	 printf("\n '0'   Exit");
	 printf("\n\n Enter yore choice? ");
	 scanf("%d",&ch);
	 if(ch>=1&&ch<=5)
	 {
		printf("\nEnter two number:");
		scanf("%d%d",&x,&y);
	 }
	 switch(ch)
	 {
		case '+':printf("\n Sum=%d",x+y);
			 break;
		case '-':printf("\n Sub=%d",x-y);
			 break;
		case '*':printf("\n Mul=%d",x*y);
			 break;
		case '/':printf("\n Div=%f",(float)x/y);
			 break;
		case '%':printf("\n Mod=%d",x%y);
			 break;
		case '0':break;
		default: printf("\n Invalid choice....");
	 } //end of switch
	 printf("Press any Key to continue");
	 getch();
  }while(ch!='0');
}//end of main
//WAP to Perform Arithmatic Operation using switch(char)
#include<stdio.h>
#include<conio.h>
void main()
{
  char ch;
  int x,y;
  clrscr();
  do
  {
	 printf("\nPress:\n");
	 printf("\n '+'   Addition");
	 printf("\n '-'   Subtraction");
	 printf("\n '*'   Multiplication");
	 printf("\n '/'   Division");
	 printf("\n '%'   Mod");
	 printf("\n '0'   Exit");
	 printf("\n   Enter yore choice? ");
	 fflush(stdin);
	 scanf("%c",&ch);
	 if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='%')
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
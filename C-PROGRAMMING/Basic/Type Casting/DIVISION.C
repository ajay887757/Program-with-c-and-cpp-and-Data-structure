//WAP to calculate the division of two no
#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
float z;   //decleration of variable
clrscr();    //for clear the screen
printf("enter the valve of x and y");
scanf("%d%d",&x,&y);
z=(float)x/y;  //typecasting of x
printf("\n the division of 2 nos=%f",z);
}
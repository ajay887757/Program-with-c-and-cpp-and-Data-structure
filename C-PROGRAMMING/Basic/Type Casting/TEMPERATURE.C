//WAP to Convert temperature from Ferhenite to Celcious
#include<stdio.h>
#include<conio.h>
void main()
{
  int f;
  float c;
  clrscr();
  printf("Enter Temp in Ferhenite:- ");
  scanf("%d",&f);
  c=5*(f-32)/9;
  printf("Temp in Celcious:- %d",c);
  getch();
}

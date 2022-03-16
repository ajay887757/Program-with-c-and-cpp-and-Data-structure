//WAP to Create Dynamic String
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
  int len;
  char *p;
  clrscr();
  printf("\n enter lenth of string");
  scanf("%d",&len);
  p=(char *)malloc((len+1)*sizeof(char));
  printf("enter any string");
  gets(p);
  printf("Entered String is: ");
  puts(p);
  free(p);
}
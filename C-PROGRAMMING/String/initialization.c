//Initialization of String
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	 char s1[20];//garvage value
	 char str1[]="hello";
	 char str2[]={'h','e','l','l','o'};
	 clrscr();
	 printf("\n%d    %d",sizeof(str1),sizeof(str2));
	 printf("\n%d    %d",strlen(str1),strlen(str2));
	 printf("\n%s    %s",str1,str2);
	 getch();
}
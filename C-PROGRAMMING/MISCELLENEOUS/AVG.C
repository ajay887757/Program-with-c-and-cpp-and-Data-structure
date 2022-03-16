//Command Line Arguments - Avg of Integers
#include<stdio.h>
void main(int argc,char *argv[])
{
  int sum,i;
  for(i=0;i<argc;i++)
    sum+=atoi(argv[i]);
  printf("Average=%f",sum/(argc-1));
}
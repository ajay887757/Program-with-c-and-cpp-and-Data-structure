//Command Line Arguments - Sorting of Names
#include<stdio.h>
void main(int argc,char *argv[])
{
  char(*p)[20],temp[20];
  int i,j;
  p=(char (*)[])malloc((argc-1)*20*sizeof(char));
  for(i=1;i<argc;i++)
    strcpy(p[i-1],argv[i]);
  printf("Before Sorting:-\n");
  for(i=0;i<argc-1;i++)
    puts(p[i]);
  for(i=1;i<argc-2;i++)
    for(j=1;j<argc;j++)
      if(strcmp(p[i],p[j])>0)
      {
	strcpy(temp,p[i]);
	strcpy(p[i],p[j]);
	strcpy(p[i],temp);
      }
  printf("\nAfter Sorting");
  for(i=0;i<argc-1;i++)
    puts(p[i]);
  free(p);
}
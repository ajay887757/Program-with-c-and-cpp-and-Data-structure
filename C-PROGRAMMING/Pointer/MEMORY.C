//Memory Concept Of Pointer
#include<stdio.h>
#include<conio.h>
void main()
 {
 int *p;
 float *fp;
 char *cp;
 double *dp;
 printf("\n %d  %d  %d  %d ", sizeof(p) , sizeof(fp) , sizeof(cp), sizeof(dp) );

 printf("\n %d  %d  %d  %d ", sizeof(*p) , sizeof(*fp) , sizeof(*cp), sizeof(*dp) );

 printf("\n %d  %d  %d  %d ", sizeof(&p) , sizeof(&fp) , sizeof(&cp), sizeof(&dp) );

 printf("\n%d  %d  %d  %d ",sizeof(p+dp) ,sizeof(fp/p) ,sizeof(cp*p),sizeof(dp-cp));

 printf("\n%d %d %d %d",sizeof(p+*p),sizeof(fp+*fp),sizeof(cp+*cp), sizeof(dp+*dp) );

 printf("\n %d  %d  %d",sizeof(fp+*p**cp) , sizeof(dp-*p**cp) , sizeof(cp+*p**cp) );

 printf("\n %d  %d ", sizeof(*(&fp)) , sizeof(&(*fp)) );
 }


  


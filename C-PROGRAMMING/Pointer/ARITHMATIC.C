//Arithmetic operator on pointer
#include<stdio.h>
#include<conio.h>
void main()
     {
     int *p ;
     float *fp;
     char *cp;
     double *dp;
     p=fp+cp;
     dp=p-cp;
     fp=fp*cp;
     cp=dp/fp;
     *dp *= *p * *dp * *fp - *p * *cp + *dp * *fp * *cp;
     p++;
     fp--;
     cp++;
     dp--;
     p=p-7;
     fp=fp+3;
     cp=cp-11;
     dp=dp+4;
     fp=fp*5;
     p=p/8;
     }
             

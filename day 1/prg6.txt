#include <stdio.h>

int main() {
   int tam;
 int eng,mat,sci,com ,total;
 float avg;
 printf("*************************");
 printf("\nenter the tamil mark:");
 scanf("%d",&tam);
 printf("\nenter the english mark:");
 scanf("%d",&eng);
 printf("\nenter the maths mark:");
 scanf("%d",&mat);
 printf("\nenter the science mark:");
 scanf("%d",&sci);
 printf("\nenter the computer mark:");
 scanf("%d",&com);
 
  total = tam + eng + mat + sci + com;
   printf("*************************");
 printf("\n\t\t\ttotal marks:%d",total);
 avg=total/5;
  printf("*************************");
  printf("\naverage :%2.f",avg);
    return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
   float a,b,c,d,x1,x2;
   printf("a: ");
   scanf("%f", &a);
   printf("f: ");
   scanf("%f", &b);
   printf("c: ");
   scanf("%f", &c);

   d= sqrt((b*b)- (4*a*c));
   //printf(" %f ",d);
   x1= (-b+d)/(2*a);
   x2= (-b-d)/(2*a);

   printf("X1 %f ",x1);
   printf("X2 %f ",x2);





return 0;
}




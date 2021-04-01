#include<stdio.h>

int main()
{
    int a,b,i,result;
   int x;
   printf("a: ");
   scanf("%d", &a);
   printf("b: ");
   scanf("%d", &b);

   for(i=1;i<=a&& i<=b;i++)
   {
       if(a%i==0 && b%i==0)
       {
           result =i;
       }
       printf("%d", result);
   }
      return 0;
}



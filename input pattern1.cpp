#include<stdio.h>

int main()
{
    int a,b;
    char arr[100];
   int x;


   printf("Row: ");
   scanf("%d", &a);

   printf("Symbol: ");
   scanf("%s" , &arr );

   for(int i=a;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",arr[0]);
        }

        printf("\n");
    }




return 0;
}



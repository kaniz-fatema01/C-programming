#include<stdio.h>

int main()
{
    int a,b;
    char arr[100];
   int x;
   printf("Symbol: ");
   gets(arr);

   printf("Row: ");
   scanf("%d", &a);

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



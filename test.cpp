#include <stdio.h>
#include <math.h>

int main()
{
   int n,temp, result,i;
   printf("Enter a binary number: ");
    scanf("%d", &n);
    i=0;
    
    while((n != 0)
    {
        temp = n % 10;
        n /= 10;
        result += temp * pow(2, i);
        ++i;
    }
    printf("%d",result);
   

    return 0;
}

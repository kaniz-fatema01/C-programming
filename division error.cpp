#include <stdio.h>

int main()
{
    float a,b,result;
    printf("a= ");
    scanf("%f", &a);
    
    printf("b= ");
    scanf("%f", &b);
    
if (b==0)
{  
    printf("eror");
}
else 
{
    result = a/b;
    printf("result %f" , result);
}

    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
   int i;
   int count1=0,result = 0;
    char str1[1000],str2[1000];

    gets(str1);
    gets(str2);

     result =  strcmp(str2,str1);

    printf("%d  ",result);


return 0;



}

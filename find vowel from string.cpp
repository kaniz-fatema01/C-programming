#include <stdio.h>
 int main()
{

    char str[1000];

    gets(str);
    puts(str);

    int i = 0 , count1 = 0;

    while(str[i]!='\0'){

        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ){

            count1++;
        }

        i++;
    }

    printf("%d",count1);

    return 0;

}

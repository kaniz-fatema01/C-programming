#include <stdio.h>
 int main()
{

    char str[1000];

    gets(str);
  
    int i = 0;

    while(str[i]!='\0'){

            i++;

    }


    while(i!=0){


        printf("%c",str[i-1]);

        i--;
    }


    return 0;

}

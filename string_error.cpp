#include <stdio.h>
 int main()
{

    char str[1000];

    gets(str);

    int i = 0;

    while(str[i]!='\0'){

        i++;
    }

        if (i<=10){

            printf("not error");
        }

        else {

            printf("error");
        }

    return 0;

}

#include <stdio.h>
 int main()
{

    char str[1000];

    gets(str);
    puts(str);

    int i = 0;

    while(str[i]!='\0'){
    i++;
    }

    printf("%d",i);

    return 0;

}

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, n,x;
  x = 0;
   while(true)
    {
    printf("enter a random number (1-10): ");
    scanf("%d", &a);

    n = rand() % 10+1;
    printf("random number: %d\n", n);
    if(a==n)
    {
        printf("you won\n");
    }
    else
    {
        printf("you lose\n" );
    }

     printf("to end press 0 ");
    scanf("%d", &x);

    if(x==0){
        break;
    }

    else if(x>1){

        printf("error");
        break;
    }






  }






  return 0;
}


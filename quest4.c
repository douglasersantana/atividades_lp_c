#include <stdio.h>

int enesimo(int n) {

  if(n==1||n==2)
    return 1;

return enesimo(n-1)+enesimo(n-2);

}

int main(void){
int n=4;

  printf("%d",enesimo(n));

return 0;}

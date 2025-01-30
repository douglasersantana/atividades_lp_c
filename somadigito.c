#include <stdio.h>
int somadigito(int n){
if(n==0){
    return 0;
 }   return n%10 + somadigito(n/10);
}
int main(){
int n;
n=1234;
printf("%d",somadigito(n));


return 0;
}

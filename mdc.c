#include <stdio.h>
int mdc(int x,int y){
  if(x==y){
    return x;
  }
  if(x>y){
    return mdc(x - y,y);
  }

  return mdc(x,y);
}
int main(){
int x=8;
  int y=6;
  printf("%d",mdc(x,y));
  return 0;

}

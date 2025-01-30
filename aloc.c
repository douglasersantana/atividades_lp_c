#include <stdio.h>
#include <stdlib.h>
int *join_sorted(int*vet1,int tam1,int*vet2,int tam2);
int tam1,tam2;
 int vet3= (int)malloc(tam1+tam2) * sizeof(int))
  for(int i=0;i<(tam1+tam2);i++){
    if(vet1[i]<=vet2[i])
        vet3[i]=vet1[i];
    else if(vet2[i]<=vet1[i])
        vet3[i]=vet2[i];
  }
return vet3
 int main( void )
 {
     int vet1[3]={1,2,3};
      int vet2[4]={3,7,6,8};
      int tam1=3;
      int tam2=4;
      join_sorted(vet1,tam1.vet2,tam2)
      printf("vetor 3 eh %d",vet3);

 return 0;

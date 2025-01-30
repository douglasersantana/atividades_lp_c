#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
     int dia, mes, ano;
     }Datanasc;
typedef struct {
    Datanasc datanasc;                                                                //struct dentro de outra struct
    int idade;
     char sexo;
      char nome[100];
} pessoa;
void imprimir_pessoa(pessoa ficha){
printf("\t nome :%s",ficha.nome);
printf("\t idade :%d\n",ficha.idade);
printf("\t sexo:%c\n",ficha.sexo);
printf("\tdata de nas:%d/%d/%d\n",ficha.datanasc.dia,ficha.datanasc.mes,ficha.datanasc.ano);
}
pessoa ler_pessoa(){
pessoa ficha;
printf("digite seu nome:");
fgets(ficha.nome,100,stdin);
printf("digite sua idade:");
scanf("%d",&ficha.idade);
scanf("%c");
printf("\ndigite m para masculino ou f para feminino:");
scanf("%c",&ficha.sexo);
printf("digite a sua data de nascimento em dd mm aaaa:");
scanf("%d%d%d",&ficha.datanasc.dia,&ficha.datanasc.mes,&ficha.datanasc.ano);
printf("%d",sizeof(ficha));
printf("Nome: %s\n idade:%d\n sexo:%c\n",ficha.nome,ficha.idade,ficha.sexo);
printf("data de nasc : %d/%d/%d\n",ficha.datanasc.dia,ficha.datanasc.mes,ficha.datanasc.ano);
return ficha;}

int main(){
pessoa ficha;
ficha =ler_pessoa();
imprimir_pessoa(pessoa);



return 0;
}

#include <stdlib.h>

int main(){

    int idade;
    int nota;
    float temperatura;

    printf("Entre com a sua idade: \n");
    scanf(" %d", &idade);

    // utilizando if else para validar a idade com condicionais &&
   if (idade > 60){
        printf("Você é idoso.\n");
    } else if (idade >= 18 && idade < 60){
        printf("Você é um adulto! \n");
    } else if (idade < 18 && idade > 12){
        printf("Você é um adolescente.\n");
    } else {
        printf("Você é uma criança.\n");
    }
   
    printf("Digite sua nota de 0 a 100: ");
    scanf(" %d", &nota); // atribui o valor digitado a variável nota
 
    // utilizando if else para validar a nota com condicionais ||
    if(nota >= 90){
        printf("Você está aprovado com maestria. NOTA A++!\n");
    } else if (nota >= 80 && nota < 90){
        printf("Você está aprovado. NOTA A+!\n");
    } else if (nota >= 70 && nota < 80){
        printf("Você está aprovado. NOTA B!\n");
    } else if (nota >= 60 && nota < 70){
        printf("Você está aprovado. NOTA C!\n");
    } else {
        printf("Você está reprovado. NOTA F!\n");
    }

    printf("Digite a temperatura: ");
    scanf(" %f", &temperatura); 

    // utilizando if else para avaliar a temperatura com condicionais ! que inverte o valor do resultado
    if(!(temperatura >= 30 && temperatura <= 40)){
        printf("Temperatura está fora do intervalo de 30 a 40 graus.\n");
    } else {
        printf("Não está bom para praia.\n");
    }
}

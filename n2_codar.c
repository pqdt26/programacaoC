#include <stdio.h>

int main(){
int idade, matricula;
float altura;
char nome[50];

printf("Digite sua idade: \n");
scanf("%d", &idade);

printf("Digite sua altura: \n");
scanf("%f", &altura);

printf("Digite seu nome: \n");
scanf("%S", &nome);

printf("Digite sua matriculla  \n");
scanf("%d", &matricula);

printf("Nome do aluno: %S - Matrícula: %d\n", nome, matricula);
printf("Idade: %d - Altura: %f", idade, altura);

return 0;

}
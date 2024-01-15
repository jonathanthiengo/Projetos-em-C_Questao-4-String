/*Faça um programa que receba uma palavra e a imprima de trás-para-frente*/

#include <stdio.h>
#include <string.h>
#define TAM 100
#define gets(a)fgets(a,sizeof(a),stdin);a[strcspn(a,"\n")]='\0';
int main(void) {
  int i;
  char nome[TAM];

  printf("Digite uma palavra:");
  gets(nome);
  
  int tam = strlen(nome);

 for(i=strlen(nome)-1;i>=0;i--){ // ou for(i=tam - 1 ;i>=0;i--)
   printf("%c",nome[i]);
 }
  return 0;
}
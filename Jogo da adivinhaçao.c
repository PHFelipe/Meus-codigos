#include <stdio.h>
#define TENTATIVAS 6
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");//aqui eu defino que meus printfs estar�o na norma do portugues!

printf("*******************************************\n");
printf("*Ola seja bem-vindo ao jogo da adivinhacao*\n");
printf("*******************************************\n");

printf("voce tem 6 tentativas, o numero esta entre 0 e 100 e sua pontua��o tamb�m vai de 0 a 100! boa sorte :)\n");

for(int i = 1; i <= TENTATIVAS; i++){

int numerosecreto = 42;
int chute;
int pontos;

printf("digite o seu chute: ");
scanf("%d", &chute);
fflush(stdin);
printf("\ntentativa %d de %d\n", i, TENTATIVAS);

if (chute < 0){
    printf("voce nao pode digitar numeros negativos\n");
    i--;
    continue;
}

if(chute == numerosecreto){
    printf("\nParabens voce acertou o numero secreto\n");
    pontos = i * 20;
    printf("\nSua pontua��o foi de %d pontos\n",120 - pontos);
    break;
} else if(chute > numerosecreto){
    printf("Seu chute foi maior que o numero secreto!\n");
    }
else{
    printf("Seu chute foi menor que o numero secreto!\n");
    }
if (i == TENTATIVAS){
    printf("\nn�o foi desta vez, jogue novamente voce consegue!\n");
}
}
printf("*********************\n");
printf("*obrigado por jogar!*\n");
printf("*********************\n");
}


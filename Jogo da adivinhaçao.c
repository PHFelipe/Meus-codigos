#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define TENTATIVAS 5
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");//aqui eu defino que meus printfs estarão na norma do portugues!

printf("*******************************************\n");
printf("*Ola seja bem-vindo ao jogo da adivinhacao*\n");
printf("*******************************************\n");

printf("voce tem %d tentativas, o numero esta entre 0 e 100 e sua pontuação também vai de 0 a 100! boa sorte :)\n", TENTATIVAS);
//neste ponto funciona a geração dos numeros
int segundos = time(0);
srand(segundos);
int numerogrande = rand();
int numerosecreto = numerogrande % 100;

//este "for" é o loop  que da continuidade as tentativas
for(int i = 1; i <= TENTATIVAS; i++){

int chute;
int pontos;

printf("digite o seu chute: ");
scanf("%d", &chute);
fflush(stdin);//esta linha limpa o buffer do teclado
printf("\ntentativa %d de %d\n", i, TENTATIVAS);

//daqui até o final funciona as verificações do numero digitado pelo jogador
if (chute < 0){
    printf("voce nao pode digitar numeros negativos\n");
    i--;
    continue;
}

if(chute == numerosecreto){
    printf("\nParabens voce acertou o numero secreto\n");
    pontos = i * 20;
    printf("\nSua pontuação foi de %d pontos\n",120 - pontos);
    break;
} else if(chute > numerosecreto){
    printf("Seu chute foi maior que o numero secreto!\n");
    }
else{
    printf("Seu chute foi menor que o numero secreto!\n");
    }
if (i == TENTATIVAS){
    printf("\nnão foi desta vez, jogue novamente voce consegue!\n");
    printf("\nSua pontuação foi de 0 pontos\n");
}
}
printf("*********************\n");
printf("*obrigado por jogar!*\n");
printf("*********************\n");
}



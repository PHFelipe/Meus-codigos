#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");//aqui eu defino que meus printfs estarão na norma do portugues!

printf("*******************************************\n");
printf("*Ola seja bem-vindo ao jogo da adivinhacao*\n");
printf("*******************************************\n");
//neste ponto funciona a geração dos numeros

int segundos = time(0);
srand(segundos);
int numerogrande = rand();
int numerosecreto = numerogrande % 100;

int Nivel;
int Tentativas;

printf("Em qual dificuldade você deseja jogar?\n");
printf("(1) Facil (2) Médio (3) Dificil\n\n");
printf("Escolha: ");
scanf("%d", &Nivel);

switch(Nivel){
  case 1:
    Tentativas = 15;
    break;
  case 2:
    Tentativas = 10;
    break;
  default: 
    Tentativas = 6;
    break;
}



printf("voce tem %d tentativas o numero esta entre 0 e 100 e sua pontuação também vai de 0 a 100! boa sorte :)\n", Tentativas);


//este "for" é o loop  que da continuidade as tentativas
for(int i = 1; i <= Tentativas; i++){

int chute;
int pontos;

printf("digite o seu chute: ");
scanf("%d", &chute);
fflush(stdin);//esta linha limpa o buffer do teclado
printf("\ntentativa %d de %d\n", i, Tentativas);

//daqui até o final funciona as verificações do numero digitado pelo jogador
if (chute < 0){
    printf("voce nao pode digitar numeros negativos\n");
    i--;
    continue;
}

if(chute == numerosecreto){
    printf("\nParabens voce acertou o numero secreto\n");
    pontos = 100 / i;
    printf("\nSua pontuação foi de %d pontos\n", pontos);
    break;
}
else if(chute > numerosecreto){
    printf("Seu chute foi maior que o numero secreto!\n");
    }
else{
    printf("Seu chute foi menor que o numero secreto!\n");
    }
if (i == Tentativas){
    printf("\nnão foi desta vez, jogue novamente voce consegue!\n");
    printf("\nSua pontuação foi de 0 pontos\n");
}
}
printf("*********************\n");
printf("*obrigado por jogar!*\n");
printf("*********************\n");
}




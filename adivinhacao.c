// Standard I/O
// Neste arquivo, ficam todas as funções de entrada e saída.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// define ajuda a definir o valor de uma constante
// #define numeroDeTentativas 3
// Função principal "main" é necessária para rodar o programa.
int main()
{
  printf("\n\n");
  printf(" ------------------ \n");
  printf(" ------------------ \n");
  printf(" ------------------ Bem-vindo ao \n");
  printf(" ------------------ Jogo de Adivinhacao! \n");
  printf(" ------------------ \n");
  printf(" ------------------ \n");
  printf(" ------------------ \n");
  printf("\n\n");

  srand(time(0));
  int numeroSecreto = rand() % 100;

  int chute;

  int tentativas = 1;

  double pontos = 1000;

  int acertou;
  int nivel;
  int totalTentativas;

  printf("Qual o nivel de dificuldade?\n");
  printf("(1) Facil (2) Medio (3) Dificil\n\n");
  printf("Escolha: ");
  scanf("%d", &nivel);

  switch (nivel)
  {
  case 1:
    totalTentativas = 20;
    break;
  case 2:
    totalTentativas = 15;
    break;
  default:
    totalTentativas = 6;
    break;
  }

  // Sabe a quantidade? For
  // Não sabe a quantidade? While
  for (int i = 1; i <= totalTentativas; i++)
  {
    printf("Tentativa %d de %d\n:", i, totalTentativas);
    // scanf lê o nosso teclado, funciona como o prompt do Javascript ou input no Python
    scanf("%d", &chute);

    // Estrutura de controle IF funciona igualmente ao do Javascript
    if (chute < 0)
    {
      printf("Nao use numeros negativos!");
      i--;
      // continue irá ir para a próxima iteração do loop
      continue;
    }

    acertou = (chute == numeroSecreto);

    if (acertou)
    {
      break;
    }
    if (chute > numeroSecreto)
    {
      printf("O numero eh menor!\n");
    }
    else
    {
      printf("O numero eh maior!\n");
    }
    // Casting é uma forma de converter um tipo em outro.
    // abs retornará sempre um valor positivo.
    double pontosPerdidos = abs(chute - numeroSecreto) / 2.0;
    pontos = pontos - pontosPerdidos;
  }
  printf("\n");
  if (acertou)
  {
    printf(" ------------------\n");
    printf(" ------------------\n");
    printf(" ------------------\n");
    printf(" ------------------\n");
    printf("\nParabens! Você acertou!\n");
    printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
  }
  else
  {
    printf(" ------------------\n");
    printf(" ------------------\n");
    printf(" ------------------\n");
    printf(" ------------------\n");
    printf("\nVoce perdeu! Tente novamente!\n\n");
  }

  printf("Voce fez %.2f pontos.\n", pontos);
  printf("Fim de jogo.\n");
  return 0;
}
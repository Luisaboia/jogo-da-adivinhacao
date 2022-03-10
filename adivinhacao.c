// Standard I/O
// Neste arquivo, ficam todas as funções de entrada e saída.
#include <stdio.h>
// define ajuda a definir o valor de uma constante
// #define numeroDeTentativas 3
// Função principal "main" é necessária para rodar o programa.
int main()
{
  printf("************************************\n");
  printf("* Bem-vindo ao Jogo de Adivinhacao *\n");
  printf("************************************\n");

  int numeroSecreto;
  numeroSecreto = 42;

  int chute;

  int tentativas = 1;

  // Sabe a quantidade? For
  // Não sabe a quantidade? While
  while (1)
  {
    printf("Qual eh o seu %do chute? ", tentativas);
    // scanf lê o nosso teclado, funciona como o prompt do Javascript ou input no Python
    scanf("%d", &chute);

    // Estrutura de controle IF funciona igualmente ao do Javascript
    if (chute < 0)
    {
      printf("Nao use numeros negativos!");
      tentativas--;
      // continue irá ir para a próxima iteração do loop
      continue;
    }

    printf("Seu %do chute foi o numero %d\n", tentativas, chute);

    int acertou = (chute == numeroSecreto);
    int maior = chute > numeroSecreto;

    if (acertou)
    {
      printf("Voce acertou!\n");
      break;
    }
    else if (maior)
    {
      printf("O numero eh menor!\n");
    }
    else
    {
      printf("O numero eh maior!\n");
    }
    tentativas++;
  }
  printf("Fim de jogo.\n");
  return 0;
}
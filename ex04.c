#include <stdio.h>
#include <stdlib.h>

#define maxPart 100
#define maxQuest 10

int main() {
  int gabarito[maxQuest];
  int participantes[maxPart]
                   [maxQuest + 1]; // +1 para armazenar a nota
  int n = 0;
  int maiorNota = 0, menorNota = 10;
  int acimaMedia = 0;

  for (int i = 0; i < maxQuest; i++) {
    scanf("%d", &gabarito[i]);
  }

  // Leitura dos dados dos participantes
  while (1) {
    int respostas[maxQuest];
    int soma = 0;

    // Leitura das respostas
    for (int i = 0; i < maxQuest; i++) {
      scanf("%d", &respostas[i]);
      if (respostas[i] == gabarito[i]) {
        soma++;
      }
    }

    participantes[n][0] = soma;
    memcpy(&participantes[n][1], respostas, sizeof(respostas));
    n++;

    char c;
    scanf("%c", &c);
    if (c == '*') {
      break;
    }
  }

  for (int i = 0; i < n; i++) {
    if (participantes[i][0] > maiorNota) {
      maiorNota = participantes[i][0];
    }
    if (participantes[i][0] < menorNota) {
      menorNota = participantes[i][0];
    }

    // Contagem de participantes acima da média
    if (participantes[i][0] > (maxQuest / 2)) {
      acimaMedia++;
    }
  }

  printf("lista de participantes e notas:\n");
  for (int i = 0; i < n; i++) {
    printf("Participante %d: %d\n", i + 1, participantes[i][0]);
  }
  printf("\nMaior Pontuação:\n");
  for (int i = 0; i < n; i++) {
    if (participantes[i][0] == maiorNota) {
      printf("Participante %d: %d\n", i + 1, participantes[i][0]);
    }
  }

  printf("\nMenor Pontuação:\n");
  for (int i = 0; i < n; i++) {
    if (participantes[i][0] == menorNota) {
      printf("participante %d: %d\n", i + 1, participantes[i][0]);
    }
  }
  float percentualAcimaMedia = (float)acimaMedia / (float)n * 100.0;
  printf("\nPercentual de participantes acima da média: %.1f%%\n",
         percentualAcimaMedia);

  return 0;
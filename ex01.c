#include <stdio.h>
#include <string.h>

int main() {
  int N;

  printf("Digite a quantidade de passageiros: ");
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    char possuiRg[20], dataNascimentoRg[20], possuiPassagem[20], dataNascimentoPassagem[20], assento[20];

    printf("Passageiro %d:\n", i+1);
    printf("Possui RG? (formato: RG/Nao possui)");
    scanf("%s", possuiRg);
    printf("Data de nascimento do RG (formato: DD/MM/AAAA)");
    scanf("%s", dataNascimentoRg);
    printf("Possui passagem? (formato: Passagem/Nao possui)");
    scanf("%s", possuiPassagem);
    printf("Data de nascimento da passagem (formato: DD/MM/AAAA)");
    scanf("%s", dataNascimentoPassagem);
    printf("Assento (formato: A12)");
    scanf("%s", assento);

    if (strcmp(possuiRg, "Nao possui") ==0) {
      printf("a saída é nessa direção\n");
      continue;
    }
    if (strcmp(possuiPassagem, "nao possui") == 0) {
      printf("a recepção é nessa direção\n");
      continue;
    }

    if (strcmp(dataNascimentoRg, dataNascimentoPassagem) != 0) {
      printf("190\n");
      continue;
    }
    printf("o seu assento é %s, tenha um ótimo dia\n", assento);
  }

  return 0;
}
#include <stdio.h>

int main() {
  int jogosVendidos;
  float valorTotalVendas, valorBonus, valorTotalSalario;

  printf("digite a quantidade de jogos vendidos: ");
  scanf("%d", &jogosVendidos);

  valorTotalVendas = jogosVendidos*19.90;
  valorBonus = (jogosVendidos / 15)*0.08 * valorTotalVendas;
  valorTotalSalario = valorTotalVendas*0.5 + valorBonus;

  printf("R$ %.2f\n", valorTotalVendas);
  printf("R$ %.2f\n", valorBonus);
  printf("R$ %.2f\n", valorTotalSalario);

  return 0;
}
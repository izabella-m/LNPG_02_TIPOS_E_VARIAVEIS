#include <stdio.h>
#include <math.h>

double calcular_pi(int n) {
    double soma = 0;
    for (int i = 1; i <= n; i++) {
        double termo = pow(-1, i-1) / pow(2*i - 1, 3);
        soma += termo;
    }
    return pow(soma * 32, 1.0/3);
}

int main() {
    int n;
    printf("digite o número de termos da série:");
    scanf("%d", &n);
    double pi = calcular_pi(n);
    printf("o valor aproximado de pi com %d termos da série é: %.10f\n", n, pi);
    return 0;
}
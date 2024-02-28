import java.util.Scanner;

public class ex03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("digite a quantidade de jogos vendidos:");
        int jogosVendidos = scanner.nextInt();

        double valorTot = jogosVendidos * 19.90;

        // Cálculo do valor do bônus
        int bonusQtd = jogosVendidos / 15;
        double valorBonus = valorTot * 0.08 * bonusQtd;

        double valorTot = valorTot * 0.5 + valorBonus;

        System.out.printf("%.2f\n", valorTot);
        System.out.printf("%.2f\n", valorBonus);
        System.out.printf("%.2f\n", valorTot);
    }
}

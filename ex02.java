import java.util.Scanner;

public class ex02 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("digite o número de termos:");
        int n = scanner.nextInt();

        double s = 0.0;
        for (int i = 1; i <= n; i++) {
            s += 1.0 / (Math.pow(i, 3));
        }

        double pi = Math.pow((s * 32), 1.0 / 3);

        System.out.printf("o valor de pi com %d termos é: %.5f\n", n, pi);
    }
}

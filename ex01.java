import java.util.Scanner;

public class ex01 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("digite a quantidade de passageiros:");
        int n = scanner.nextInt();

        for (int i = 0; i< n; i++) {
            System.out.printf("passageiro %d:\n", i + 1);
            System.out.print("possui RG? (formato: RG/Nao possui) ");
            String possuiRg = scanner.next();
            System.out.print("data de nascimento do RG (formato: DD/MM/AAAA) ");
            String dataNascimentoRg = scanner.next();
            System.out.print("possui passagem? (formato: Passagem/Nao possui) ");
            String possuiPassagem = scanner.next();
            System.out.print("data de nascimento da passagem (formato: DD/MM/AAAA) ");
            String dataNascimentoPassagem = scanner.next();
            System.out.print("assento (formato: A12) ");
            String assento = scanner.next();

            if (possuiRg.equals("Nao possui")) {
                System.out.println("A saída é nessa direção");
                continue;
            }
            if (possuiPassagem.equals("Nao possui")) {
                System.out.println("A recepção é nessa direção");
                continue;
            }
            if (!dataNascimentoRg.equals(dataNascimentoPassagem)) {
                System.out.println("190");
                continue;
            }


            System.out.printf("o seu assento é %s, tenha um ótimo dia\n", assento);
        }
    }
}

import java.util.Scanner;

public class ex05 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float minIPCA = Float.MAX_VALUE, maxIPCA = Float.MIN_VALUE;
        int minAno = 0, minMes = 0, maxAno = 0, maxMes = 0;
        float totIPCA = 0.0f;
        int count = 0;
        while (true) {
            String linha = scanner.nextLine();

            if (linha.equals("*")) {
                break;
            }
            int ano = Integer.parseInt(linha.split(" ")[0]);
            int mes = Integer.parseInt(linha.split(" ")[1]);
            float ipca = Float.parseFloat(linha.split(" ")[2].replace(",", "."));

            if (ipca < minIPCA) {
                minIPCA = ipca;
                minAno = ano;
                minMes = mes;
            } else if (ipca > maxIPCA) {
                maxIPCA = ipca;
                maxAno = ano;
                maxMes = mes;
            }
            totIPCA += ipca;
            count++;
        }
        float mediaIPCA = totIPCA / count;


        System.out.printf("Menor IPCA: %.2f (%d/%d)\n", minIPCA, minMes, minAno);
        System.out.printf("Maior IPCA: %.2f (%d/%d)\n", maxIPCA, maxMes, maxAno);
        System.out.printf("Média do IPCA: %.2f\n", mediaIPCA);
    }
}

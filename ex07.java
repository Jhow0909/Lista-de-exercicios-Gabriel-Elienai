import java.util.Scanner;
import java.util.Locale;

public class Exercicio07 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in).useLocale(Locale.US);
        System.out.print("Primeiro número: ");
        double n1 = entrada.nextDouble();
        System.out.print("Segundo número: ");
        double n2 = entrada.nextDouble();

        if (n1 < 0 || n2 < 0 || n1 == 0 || n2 == 0) {
            System.out.println("Notas inválidas.");
        } else {
            double media = (n1 + n2) / 2;
            System.out.printf("Média: %.1f%n", media);
        }
        entrada.close();
    }
}

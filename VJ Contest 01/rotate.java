
import java.util.Scanner;

public class rotate {

    public static void main(String[] args) {

        int a, b, c;

        try (Scanner input = new Scanner(System.in)) {

            String x = input.next(); // ex: s = 123

            // it convert char ascii value to int.
            a = x.charAt(0) - '0'; // '49' - '48'
            b = x.charAt(1) - '0'; // '50' - '48'
            c = x.charAt(2) - '0'; // '51' - '48'

            int sum = 111 * (a + b + c);

            System.out.println(sum);

        }
    }
}
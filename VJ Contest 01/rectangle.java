import java.util.Scanner;

public class rectangle {
    public static void main(String[] args) {

        int x, y;

        Scanner sc = new Scanner(System.in);

        x = sc.nextInt();
        y = sc.nextInt();

        int area = x * y;
        int perimeter = 2 * (x + y);

        System.out.println(area + " " + perimeter);

        sc.close();

    }
}

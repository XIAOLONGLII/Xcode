import java.util.Random;
import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {

        Scanner input = new Scanner(System.in);
        //System.out.println("Hello World!");
        Random rand = new Random();
        int num = rand.nextInt(50);

        System.out.println(num);

        int guess = input.nextInt();
        while(guess != num)
        {

            guess = input.nextInt();
        }

        System.out.println("You guess it right." + guess);

    }
}

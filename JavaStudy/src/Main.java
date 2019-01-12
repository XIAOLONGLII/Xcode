import java.lang.Math;
public class Main
{

    public static void main(String[] args)
    {
        int a = 200;
        int b = 2;
        int c = Math.floorMod(a,b);

        int d = 2;
        double e = 3.0;
        int f = (int)(e * d);

        String s = "hello";



        System.out.println("Result "+c);
        System.out.println("Result2 "+ f);

        System.out.println("Result3 "+ s.substring(3,5));

        String s1 = "EdwardL";
        System.out.println("Result3 "+ s1.substring(2,6));
        //System.out.println("Ed".repeat(3));

        String s3 = "Hello";
        System.out.println(s3);


    }
}

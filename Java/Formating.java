import java.util.Scanner;

public class Formating {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("================================");
        for(int i=0;i<3;i++){
            String inString = sc.next();
            int inInt = sc.nextInt();
            System.out.printf("%15s%03d%n",inString,inInt);
        }
        System.out.println("================================");

    }
}

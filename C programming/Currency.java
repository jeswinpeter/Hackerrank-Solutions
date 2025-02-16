import java.util.*;
import java.text.*;

public class Currency {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();

        // Write your code here.
        NumberFormat US = NumberFormat.getCurrencyInstance(Locale.US);
        String us = US.format(payment);
        
        Locale indiaLocale = new Locale.Builder().setLanguage("en").setRegion("IN").build();
        NumberFormat IN = NumberFormat.getCurrencyInstance(indiaLocale);
        String india = IN.format(payment);
        
        NumberFormat CH = NumberFormat.getCurrencyInstance(Locale.CHINA);
        String china = CH.format(payment);
        
        NumberFormat fr = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        String france = fr.format(payment);
        
        System.out.println("US: " + us);
        System.out.println("India: " + india);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
    }
}

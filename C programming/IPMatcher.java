import java.util.regex.Matcher;
import java.util.regex.Pattern;
import java.util.Scanner;

class IPMatcher{

    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String IP = in.next();
            System.out.println(IP.matches(new MyRegex().pattern));
        }
        in.close();
    }
}

class MyRegex {
    String pattern = "^(25[0-5]|2[0-4][0-9]|[0-1]?[0-9][0-9]?)\\."+
                     "(25[0-5]|2[0-4][0-9]|[0-1]?[0-9][0-9]?)\\."+
                     "(25[0-5]|2[0-4][0-9]|[0-1]?[0-9][0-9]?)\\."+
                     "(25[0-5]|2[0-4][0-9]|[0-1]?[0-9][0-9]?)$";
}
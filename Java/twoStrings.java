import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the twoStrings function below.
    static String twoStrings(String s1, String s2) {
        int a[]=new int[26];
        int b[]=new int[26];
        for(int i = 0 ; i < s1.length() ; i++)
        {
            a[s1.charAt(i)-'a']++;
        }
        for(int i = 0 ; i < s2.length() ; i++)
        {
            b[s2.charAt(i)-'a']++;
        }
        int flag=0;
        for(int i = 0 ; i < 26 ; i++)
        {
            if(a[i] >0 && b[i]>0)
            {
                flag=1 ; 
                break;
            }
        }
        if(flag==1) return "YES";
        return "NO";



    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String s1 = scanner.nextLine();

            String s2 = scanner.nextLine();

            String result = twoStrings(s1, s2);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}

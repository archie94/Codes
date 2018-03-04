import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner in = new Scanner(System.in);
        
        int n = in.nextInt();
        int a[]= new int[n];
        for (int i=0;i<n;i++) {
            a[i] = in.nextInt();
        }
        
        int count = 0;
        
        if (n==1) {
            if (a[0]<0) System.out.println(1);
            else System.out.println(0);
            return;
        } 
        
        for (int i=0;i<n-1;i++) {
            int sum = a[i];
            if (sum<0) count++;
            for (int j=i+1;j<n;j++) {
                sum+=a[j];
                if (sum<0) count++;
            }
        }
        
        if (a[n-1] < 0) count++;
        
        System.out.println(count);
    }
}

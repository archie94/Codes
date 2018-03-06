import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        int n,m;
        Scanner in = new Scanner(System.in);
        
        n = in.nextInt();
        m = in.nextInt();
        
        BitSet bs1 = new BitSet(n);
        BitSet bs2 = new BitSet(n);
        
        in.nextLine();
        
        for (int i=0;i<m;i++) {
            String cmd = in.next();
            int x = in.nextInt();
            int y = in.nextInt();
            
            switch(cmd) {
                case "AND":
                    if (x == 1) {
                        bs1.and(bs2);
                    } else {
                        bs2.and(bs1);
                    }
                    break;
                case "OR":
                    if (x == 1) {
                        bs1.or(bs2);
                    } else {
                        bs2.or(bs1);
                    }
                    break;
                case "XOR":
                    if (x == 1) {
                        bs1.xor(bs2);
                    } else {
                        bs2.xor(bs1);
                    }
                    break;
                case "FLIP":
                    if (x == 1) {
                        bs1.flip(y,y+1);
                    } else {
                        bs2.flip(y,y+1);
                    }
                    break;
                case "SET":
                    if (x == 1) {
                        bs1.set(y);
                    } else {
                        bs2.set(y);
                    }
                    break;
            }
            
            System.out.println(bs1.cardinality() + " " + bs2.cardinality());
        }
    }
}

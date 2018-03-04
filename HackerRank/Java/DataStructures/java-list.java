import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        List<Integer> list = new ArrayList(n);
        for (int i=0;i<n;i++) {
            list.add(in.nextInt());
        }
        
        int q = in.nextInt();
        for (int i = 0;i<q;i++) {
            String cmd = in.next();
            if ("Insert".equals(cmd)) {
                int x = in.nextInt();
                int y = in.nextInt();
                if (x <= list.size() - 1) {
                    list.add(x,y);
                } else {
                    list.add(y);
                }
                
            } else if ("Delete".equals(cmd)) {
                int x = in.nextInt();
                list.remove(x);
            }
        }
        
        for (int i = 0;i<list.size();i++) {
            System.out.print(list.get(i) + " ");
        }
        System.out.println();
    }
}

//Complete this code or write your own from scratch
//https://www.hackerrank.com/challenges/phone-book/problem
import java.util.*;
import java.io.*;

class Solution{
   public static void main(String []argh)
   {
      Scanner in = new Scanner(System.in);
      int n=in.nextInt();
      in.nextLine();
       
      Map<String, Integer> book = new HashMap<>();
      for(int i=0;i<n;i++)
      {
         String name=in.nextLine();
         int phone=in.nextInt();
         in.nextLine();
          
         book.put(name, phone);
      }
      while(in.hasNext())
      {
         String s=in.nextLine();
         if (book.get(s) != null) {
             System.out.println(String.format("%s=%s", s, book.get(s)));
         } else {
             System.out.println("Not found");
         }
      }
   }
}

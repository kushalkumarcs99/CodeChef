import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
 public static void main (String[] args) throws java.lang.Exception
 {
  Scanner sc = new Scanner(System.in);
  int t = sc.nextInt();
  while(t-->0){
      int count = 0;
      String s = sc.next();
      if(s.length()==1){
          System.out.println(0);
          continue;
      }
      for(int i=1;i<s.length();i++){
          if(s.charAt(i)=='x' && s.charAt(i-1)=='y' || s.charAt(i)=='y' && s.charAt(i-1)=='x'){
              count++;
              i++;
          }
      }
      System.out.println(count);
  }
 }
}

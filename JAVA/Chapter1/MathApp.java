import java.lang.System;
import java.lang.Math;

public class MathApp {
 public static void main(String args[]) {
  System.out.println(Math.E);
  System.out.println(Math.PI);
  System.out.println(Math.abs(-1234));
  System.out.println(Math.cos(Math.PI/4));
  System.out.println(Math.sin(Math.PI/2));
  System.out.println(Math.tan(Math.PI/4));
  System.out.println(Math.log(1));
  System.out.println(Math.exp(Math.PI));
  for(int i=0;i<5;++i)
   System.out.print(Math.random()+" "); 
  System.out.println(); 

} 

}
/*
2.718281828459045
3.141592653589793
1234
0.7071067811865476
1.0
0.9999999999999999
0.0
23.140692632779267
0.11532581519046647 0.4458601351066609 0.980757698093553 0.23030711522893255 0.2
635402093705278
*/
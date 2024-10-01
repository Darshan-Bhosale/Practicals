import java.lang.System;
import java.lang.Runtime;
import java.io.IOException;

public class RuntimeMemApp
 {
 public static void main(String args[]) throws IOException
 {
  Runtime r = Runtime.getRuntime();
  System.out.println(r.totalMemory());
  System.out.println(r.freeMemory());
 }
}

/*Output:
3145720
3135888*/

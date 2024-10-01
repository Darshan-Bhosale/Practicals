import java.lang.System;
import java.lang.Runtime;
import java.io.IOException;

public class RuntimeExecApp {
 public static void main(String args[]) throws IOException {
  Runtime r = Runtime.getRuntime();
  r.exec("C:\\Windows\\Explorer.exe");
 }
}
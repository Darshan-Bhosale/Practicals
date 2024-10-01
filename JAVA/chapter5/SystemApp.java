import java.lang.System;
import java.util.Properties;

public class SystemApp {
 public static void main(String args[]) {
  long time = System.currentTimeMillis();
  System.out.print("Milliseconds elapsed since January 1, 1970: ");
  System.out.println(time);
  Properties p=System.getProperties();
  p.list(System.out);
  System.exit(13);
 }
}
/*
Milliseconds elapsed since January 1, 1970: 1197697923175
-- listing properties --
java.runtime.name=Java(TM) 2 Runtime Environment, Stand...
sun.boot.library.path=C:\Program Files\Java\jre1.5.0\bin
java.vm.version=1.5.0-b64
java.vm.vendor=Sun Microsystems Inc.
java.vendor.url=http://java.sun.com/
path.separator=;
java.vm.name=Java HotSpot(TM) Client VM
file.encoding.pkg=sun.io
user.country=US
sun.os.patch.level=Service Pack 2
java.vm.specification.name=Java Virtual Machine Specification
user.dir=D:\Books\Java\Chap 5\Chap 5 Programs
java.runtime.version=1.5.0-b64
java.awt.graphicsenv=sun.awt.Win32GraphicsEnvironment
java.endorsed.dirs=C:\Program Files\Java\jre1.5.0\lib\en...
os.arch=x86
java.io.tmpdir=C:\DOCUME~1\ADMINI~1\LOCALS~1\Temp\
line.separator=

java.vm.specification.vendor=Sun Microsystems Inc.
user.variant=
os.name=Windows XP
sun.jnu.encoding=Cp1252
java.library.path=C:\WINDOWS\system32;.;C:\WINDOWS\syst...
java.specification.name=Java Platform API Specification
java.class.version=49.0
sun.management.compiler=HotSpot Client Compiler
os.version=5.1
user.home=C:\Documents and Settings\Administrator
user.timezone=
java.awt.printerjob=sun.awt.windows.WPrinterJob
file.encoding=Cp1252
java.specification.version=1.5
user.name=Administrator
java.class.path=.
java.vm.specification.version=1.0
sun.arch.data.model=32
java.home=C:\Program Files\Java\jre1.5.0
java.specification.vendor=Sun Microsystems Inc.
user.language=en
awt.toolkit=sun.awt.windows.WToolkit
java.vm.info=mixed mode, sharing
java.version=1.5.0
java.ext.dirs=C:\Program Files\Java\jre1.5.0\lib\ext
sun.boot.class.path=C:\Program Files\Java\jre1.5.0\lib\rt...
java.vendor=Sun Microsystems Inc.
file.separator=\
java.vendor.url.bug=http://java.sun.com/cgi-bin/bugreport...
sun.cpu.endian=little
sun.io.unicode.encoding=UnicodeLittle
sun.desktop=windows
sun.cpu.isalist=
*/
import java.awt.*;
import java.applet.*;
/*
<applet CODE="HelloWorldApplet.class" WIDTH=400 HEIGHT=100>
</applet>
*/
public class HelloWorldApplet extends Applet
{
        //Overridden paint method
        public void paint ( Graphics g )
        {
              g.drawString ( "Hello world!",10,10);
        }
}
/*

D:\Books\Java\Chap 6\Chap 6 programs>javac HelloWorldApplet.java

D:\Books\Java\Chap 6\Chap 6 programs>appletviewer HelloWorldApplet.html
*/
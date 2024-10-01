import java.awt.*;
import java.applet.*;
/*
<applet CODE="Simple.class" WIDTH=400 HEIGHT=100>
</applet>
*/
public class Simple extends Applet
{
 	//Overridden methods
 	public void init()
    {

    }

    public void start()
    {

	}

	public void stop()
	{

	}

    public void destroy()
    {

    }
    public void paint ( Graphics g )
    {
		g.drawString ( "Hello world!",10,10);
	}
}

/*
D:\Books\Java\Chap 6\Chap 6 programs>javac Simple.java

D:\Books\Java\Chap 6\Chap 6 programs>appletviewer Simple.java
*/
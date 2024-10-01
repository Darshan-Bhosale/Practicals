import java.applet.Applet;
import java.awt.*;

/*
<applet CODE="ParamTest.class" WIDTH=400 HEIGHT=100>
<param name=message  value="Testing parameters......">
<param name=fontname value=TimesNewRoman>
<param name=fontsize value=14>
</applet>
*/
public class ParamTest extends Applet
{
String msg,fn;
int fs;

public void init()
{
	setBackground(Color.blue);
	setForeground(Color.white);
}

public void start()
{
	String s;
	msg=getParameter("message");
	fn=getParameter("fontname");
	if(fn==null)
		fn="not found";
	s=getParameter("fontsize");
	try
	{
		if(s!=null)
			fs=Integer.parseInt(s);
		else
			fs=0;
	}
	catch(NumberFormatException e)
	{
		fs=-1;
	}
}

public void paint(Graphics g)
{
	g.drawString(msg,20,20);
	g.drawString("Font name : "+fn,20,40);
	g.drawString("Font size : "+fs,20,60);
	showStatus("Passing parameters to applet");
}
}
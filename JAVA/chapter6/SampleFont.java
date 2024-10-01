import java.applet.Applet;
import java.awt.*;

/*
<applet CODE="SampleFont.class" WIDTH=600 HEIGHT=100>
</applet>
*/
public class SampleFont extends Applet
{
	public void init()
	{
		Font f=new Font("SansSerif",Font.BOLD|Font.ITALIC,20);
		setFont(f);

	}
	public void paint(Graphics g)
	{
		g.drawString("Hi! This is font- SansSerif, Style-BOLD & ITALIC,and Size-40",10,50);

	}
}
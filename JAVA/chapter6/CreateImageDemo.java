import java.applet.Applet;
import java.awt.*;

/*
<applet CODE="CreateImageDemo.class" WIDTH=400 HEIGHT=100>
</applet>
*/
public class CreateImageDemo extends Applet {

Image i;
public void init()
{

	Font f=new Font("TimesRoman",Font.BOLD,28);
	setBackground(Color.yellow);
	i=createImage(300,75);
	Graphics gimg=i.getGraphics();
	gimg.setColor(getBackground());
	gimg.fillRect(0,0,300,75);
	gimg.setColor(Color.red);
	gimg.setFont(f);
	gimg.drawString("Hi! I am an image",20,20);
}
public void paint(Graphics g)
{
	g.drawImage(i,50,30,this);
}
}


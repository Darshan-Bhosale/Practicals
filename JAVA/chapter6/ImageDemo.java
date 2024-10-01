import java.applet.Applet;
import java.awt.*;

/*
<applet CODE="ImageDemo.class" WIDTH=400 HEIGHT=100>
</applet>
*/
public class ImageDemo extends Applet {

Image i;
public void init()
{
i=getImage(getCodeBase(),"kalam.gif");
}
public void paint(Graphics g)
{
g.drawImage(i,10,10,this);
}
}


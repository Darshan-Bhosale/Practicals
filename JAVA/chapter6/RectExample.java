import java.awt.*;
import java.applet.*;
/*
<applet CODE="RectExample.class" WIDTH=150 HEIGHT=150>
</applet>
*/
public class RectExample extends Applet
{
   public void paint(Graphics g)
    {
        g.drawRect(10,10,50,50);
        g.fillRect(10,80,50,50);
		g.drawRoundRect(80,10,50,50,30,30);
        g.fillRoundRect(80,80,50,50,30,30);
    }
}
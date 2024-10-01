import java.awt.*;
import java.applet.*;
/*
<applet CODE="ArcExample.class" WIDTH=320 HEIGHT=200>
</applet>
*/
public class ArcExample extends Applet
{

    public void paint(Graphics g)
    {
        g.drawArc(10,20, 50,50,0,180);
        g.fillArc(70,20, 50,50,0,180);
        g.drawArc(10,80, 50,50,90,180);
        g.fillArc(70,80, 50,50,90,180);
        g.drawArc(10,140, 50,50,180,180);
        g.fillArc(70,140, 50,50,180,180);
        g.drawArc(140,20,50, 50, 0,-270);
        g.fillArc(210,20,50, 50, 0,-270);
        g.drawArc(140,80,50, 50, 0,270);
        g.fillArc(210,80,50, 50, 0,270);


    }
}
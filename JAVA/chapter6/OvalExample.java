import java.awt.*;
import java.applet.*;
/*
<applet CODE="OvalExample.class" WIDTH=150 HEIGHT=150>
</applet>
*/
public class OvalExample extends Applet
{

    public void paint(Graphics g)
    {
        g.drawOval(20, 20, 50, 60);
        g.drawOval(90, 20, 50, 60);
        g.fillOval(30, 50, 30,30);
        g.fillOval(100,50,30,30);

    }
}
import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="Mouse" width=100 height=100>
<PARAM NAME=ButtonName VALUE=Save>
</applet>*/
public class ExerciseApplet extends Applet
{
public void paint(Graphics g)
{
	//Draw a Rectangle around the applet's display area.
       g.drawRect(0, 0, getWidth() - 1,getHeight() - 1);
	//Draw the current string inside the rectangle.
        g.drawString("Exercise Applet", 50, 50);
    }
}
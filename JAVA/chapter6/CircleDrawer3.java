import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*
  <applet code="CircleDrawer3" width=300 height=300>
  </applet>
*/

public class CircleDrawer3 extends Applet
{
public void init()
{
	setForeground(Color.blue);
	addMouseMotionListener(new MouseMotionAdapter() {

	private int radius=10;
	public void mouseDragged(MouseEvent me)
	{
		Graphics g=getGraphics();
		g.fillOval(me.getX()-radius, me.getY()-radius,2*radius,2*radius);
	}

	});
}

}

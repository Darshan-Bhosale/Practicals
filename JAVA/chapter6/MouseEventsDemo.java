import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*
  <applet code="MouseEventsDemo" width=300 height=300>
  </applet>
*/

public class MouseEventsDemo extends Applet implements MouseListener, MouseMotionListener
{

	int x,y;

  	public void init()
  	{
   		addMouseListener(this);
    	addMouseMotionListener(this);

  	}

  	public void mouseClicked(MouseEvent me)
  	{
		x=me.getX();
		y=me.getY();
		showStatus("Mouse clicked at "+x+","+y);
		repaint();
	}

	public void mouseEntered(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		showStatus("Mouse entered at "+x+","+y);
		repaint();
	}

	public void mouseExited(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		showStatus("Mouse exited at "+x+","+y);
		repaint();
	}

	public void mousePressed(MouseEvent me)
  	{
		x=me.getX();
		y=me.getY();
		showStatus("Mouse pressed at "+x+","+y);
		repaint();
  	}

  	public void mouseReleased(MouseEvent me)
  	{
		x=me.getX();
		y=me.getY();
		showStatus("Mouse released at "+x+","+y);
		repaint();
  	}

	public void mouseDragged(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		showStatus("Dragging mouse at "+x+","+y);

	}
	 public void mouseMoved(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		showStatus("Mouse moved at "+x+","+y);


	}

  	public void paint(Graphics g)
  	{

	}
}

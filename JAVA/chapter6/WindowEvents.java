import java.awt.*;
import java.awt.event.*;
import java.applet.*;

class MyFrame extends Frame implements MouseMotionListener
{
   int x,y;
   String msg="";
   public MyFrame(String s)
   {
   super(s);
   setBackground(Color.yellow);
   setForeground(Color.blue);
   setSize(200,200);
   setVisible(true);


   //create an object to handle window events
   MyWindowAdapter adapter=new MyWindowAdapter(this);

   //register it to receive those events
   addWindowListener(adapter);

   //register it to receive its own mouse motion events
   addMouseMotionListener(this);
	}

	public void mouseDragged(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		msg="Dragging mouse at ("+x+","+y+")";
		repaint();
	}
	public void mouseMoved(MouseEvent me)
	{
		x=me.getX();
		y=me.getY();
		msg="Moving mouse at ("+x+","+y+")";
		repaint();
	}
	public void paint(Graphics g)
	{
		g.drawString(msg,x,y);

	}
}

class MyWindowAdapter extends WindowAdapter
{
	MyFrame myframe;
	public MyWindowAdapter(MyFrame myframe)
	{
		this.myframe=myframe;
	}
	public void windowClosing(WindowEvent we)
	{
		myframe.setVisible(false);
	}
}

public class WindowEvents extends Applet
{
	Frame f;

	public void init()
	{
	 	f=new MyFrame("My first frame..");

	}
	public void start()
	{
		f.setVisible(true);
	}
	public void stop()
	{
		f.setVisible(false);
	}

	public void paint(Graphics g)
	{
		g.drawString("This is in applet window",10,50);

	}

}
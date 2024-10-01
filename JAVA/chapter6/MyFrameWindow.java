import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class MyFrameWindow extends Frame
{
	int x,y;
	String msg=" ";
	public MyFrameWindow()
	{
 		 addWindowListener(new MyWindowAdapter());
 		 addMouseMotionListener(new MyMouseMotionAdapter(this));
	}

	public void paint(Graphics g)
	{
		msg="Dragging mouse at ("+x+","+y+")";
		g.drawString(msg,x,y);

	}
	public static void main(String  args[])
	{
		MyFrameWindow mf=new MyFrameWindow();
		mf.setTitle("Frame window");
		mf.setSize(new Dimension(200,200));
		mf.setVisible(true);
	}
}


class MyWindowAdapter extends WindowAdapter
{
	public void windowClosing(WindowEvent we)
	{
		System.exit(0);
	}
}

class MyMouseMotionAdapter extends MouseMotionAdapter
{
	MyFrameWindow  myframe;
	public MyMouseMotionAdapter(MyFrameWindow myframe)
	{
			this.myframe=myframe;
	}
	public void mouseDragged(MouseEvent me)
	{
		myframe.x=me.getX();
		myframe.y=me.getY();
		myframe.repaint();
	}
}


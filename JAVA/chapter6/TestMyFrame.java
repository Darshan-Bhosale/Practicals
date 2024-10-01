import java.awt.*;
import java.awt.event.*;
import java.applet.*;

class MyFrame extends Frame
{
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
	}

	public void paint(Graphics g)
	{
		g.drawString("This is in frame window..",10,100);
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

public class TestMyFrame extends Applet
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
		g.drawString("This is in applet window...",10,20);
	}

}
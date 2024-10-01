import java.awt.*;
import java.applet.*;
/*
<applet code=SimpleThread width=300 height=100>
<param name=message value=" Computer Programming -2 ">
</applet>
*/
public class SimpleThread extends Applet implements Runnable
{
String msg;
Thread t=null;
int state;
boolean stopflag;

public void init()
{
setBackground(Color.cyan);
setForeground(Color.red);
showStatus("now in init() method....." );
}

public void start()
{
t=new Thread(this);
stopflag=false;
msg=getParameter("message");
t.start();
showStatus("now in start() method....." );
}

public void run()
{
char ch;
for( ; ; )
{
try
{
repaint();
Thread.sleep(250);
ch=msg.charAt(0);
msg=msg.substring(1,msg.length());
msg+=ch;
if(stopflag)
break;
}
catch(InterruptedException e)
{
}
}

}

public void paint(Graphics g)
{
g.drawString(msg,50,30);
showStatus("now in paint() method....." );
}

public void stop()
{
stopflag=true;
t=null;
showStatus("now in stop() method....." );
}

public void destroy()
{
showStatus("now in destroy() method....." );
}

}



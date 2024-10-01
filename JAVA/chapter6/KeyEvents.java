import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/*
<applet code="KeyEvents" width=300 height=100>
</applet>
*/

public class KeyEvents extends Applet implements KeyListener
{
String msg=" ";

public void init()
{
addKeyListener(this);
requestFocus();
}
public void keyPressed(KeyEvent ke)
{
showStatus("key down");
int key=ke.getKeyCode();
switch(key)
{
case KeyEvent.VK_F1: msg+="<f1>";
					break;
case KeyEvent.VK_F2: msg+="<f2>";
					break;
case KeyEvent.VK_F3: msg+="<f3>";
					break;
case KeyEvent.VK_PAGE_DOWN: msg+="<page down>";
							break;
case KeyEvent.VK_PAGE_UP: msg+="<page up>";
							break;
case KeyEvent.VK_LEFT: msg+="<left arrow>";
							break;
case KeyEvent.VK_RIGHT: msg+="<right arrow>";
							break;
case KeyEvent.VK_ENTER: msg+="<Enter>";
							break;
case KeyEvent.VK_ESCAPE: msg+="<Escape>";
							break;
case KeyEvent.VK_SHIFT: msg+="<Shift>";
							break;
case KeyEvent.VK_ALT: msg+="<Alt>";
							break;
case KeyEvent.VK_CONTROL: msg+="<Control>";
							break;
case KeyEvent.VK_CANCEL: msg+="<Cancel>";
							break;
case KeyEvent.VK_UP: msg+="<Up>";
							break;
case KeyEvent.VK_DOWN: msg+="<Down>";
							break;

}
repaint();
}


public void keyReleased(KeyEvent ke)
{
showStatus("Key Up");
}

public void keyTyped(KeyEvent ke)
{
msg+=ke.getKeyChar();
repaint();
}

public void paint(Graphics g)
{
g.drawString(msg,10,20);
}
}



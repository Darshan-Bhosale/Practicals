import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="PaintDemo" width=800 height=800>
</applet>*/
public class PaintDemo extends Applet implements ActionListener,MouseListener, MouseMotionListener
{
String msg=" ";
int i,cnt=0,o=1,c=0,mousex=0,mousey=0,s1,s2,e1,e2;
int points[][]=new int [100][6];
Button line,oval,rect,red,green,blue;


public void init()
{
setLayout(null);
line=new Button("Line");
oval=new Button("Oval");
rect=new Button("Rectangle");
red=new Button("Red");
green=new Button("Green");
blue=new Button("Blue");

add(line);
add(oval);
add(rect);
add(red);
add(green);
add(blue);

line.addActionListener(this);
oval.addActionListener(this);
rect.addActionListener(this);
red.addActionListener(this);
green.addActionListener(this);
blue.addActionListener(this);

red.setForeground(Color.red);
green.setForeground(Color.green);
blue.setForeground(Color.blue);

line.setBounds(10,10,80,30);
oval.setBounds(10,40,80,30);
rect.setBounds(10,70,80,30);
red.setBounds(10,100,80,30);
green.setBounds(10,130,80,30);
blue.setBounds(10,160,80,30);

addMouseListener(this);
addMouseMotionListener(this);

}

public void actionPerformed(ActionEvent ae)
{
String str=ae.getActionCommand();
if(str.equals("Line"))
o=1;
else if(str.equals("Oval"))
o=2;
else if(str.equals("Rectangle"))
o=3;
else if(str.equals("Red"))
c=1;
else if(str.equals("Green"))
c=2;
else if(str.equals("Blue"))
c=3;
repaint();
}


public void mouseClicked(MouseEvent me){  }

public void mouseEntered(MouseEvent me){  }

public void mouseExited(MouseEvent me) {  }

public void mousePressed(MouseEvent me)
{
points[cnt][0]=me.getX();
points[cnt][1]=me.getY();
points[cnt][4]=o;
points[cnt][5]=c;
}


public void mouseReleased(MouseEvent me)
{
points[cnt][2]=me.getX();
points[cnt][3]=me.getY();
cnt++;

}


public void mouseDragged(MouseEvent me)
{
points[cnt][2]=me.getX();
points[cnt][3]=me.getY();
repaint();
showStatus("dragging mouse at "+me.getX()+","+me.getY());
}

public void mouseMoved(MouseEvent me) { }

public void paint(Graphics g)
{
int width=0,height=0;
for(i=0;i<=cnt;i++)
{
if(points[i][5]==3)
g.setColor(Color.blue);
else if(points[i][5]==2)
g.setColor(Color.green);
else if (points[i][5]==1)
g.setColor(Color.red);
else
g.setColor(Color.black);

if(points[i][4]==1)
g.drawLine(points[i][0],points[i][1],points[i][2],points[i][3]);
else if(points[i][4]==2)
g.drawOval(points[i][0],points[i][1],points[i][2]-points[i][0],points[i][3]-points[i][1]);
else if(points[i][4]==3)
g.drawRect(points[i][0],points[i][1],points[i][2]-points[i][0],points[i][3]-points[i][1]);
}
}
}

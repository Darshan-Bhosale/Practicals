import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class Keyboard1 extends Applet
   implements KeyListener, MouseListener {

   int width, height;
   int x, y;
   String s = "";

   public void init() {
      width = getSize().width;
      height = getSize().height;
      Font f = new Font ("Courier New", Font.BOLD | Font.ITALIC, 25);
      setFont(f);
      x = width/2;
      y = height/2;

      addKeyListener( this );
      addMouseListener( this );
   }

   public void keyPressed( KeyEvent e ) { }
   public void keyReleased( KeyEvent e ) { }

   public void keyTyped( KeyEvent e ) {
      char c = e.getKeyChar();
      if ( c != KeyEvent.CHAR_UNDEFINED ) {
         s = s + c;
         repaint();
         e.consume();
      }
   }

   public void mouseEntered( MouseEvent e ) { }
   public void mouseExited( MouseEvent e ) { }
   public void mousePressed( MouseEvent e ) { }
   public void mouseReleased( MouseEvent e ) { }

   public void mouseClicked( MouseEvent e ) {
      x = e.getX();
      y = e.getY();
      s = "";
      repaint();
      e.consume();
   }

   public void paint( Graphics g )
   {
      g.drawLine( x, y, x, y-10 );
      g.drawLine( x, y, x+10, y );
      g.setColor( Color.blue );
      g.drawString( s, x, y );
   }
}


/*Try clicking and typing into the applet. You'll probably have to
click at least once before you begin typing, to give the applet the keyboard focus.*/
import java.applet.*;
import java.awt.*;
/*
<applet CODE="DrawingLines.class" WIDTH=400 HEIGHT=400>
</applet>
*/

public class DrawingLines extends Applet {

   int width, height;

   public void init() {
      width = getSize().width;
      height = getSize().height;
      setBackground( Color.yellow );
   }

   public void paint( Graphics g ) {
      g.setColor( Color.blue );

      for ( int i = 0; i < 10; ++i ) {
         g.drawLine( width, height, i * width / 10, 0 );
      }
   }
}


/*This example draws a fan of twenty lines from the
bottom right corner of the Applet along the top edge.
The applet's getSize method is used to find the dimensions of the applet.*/
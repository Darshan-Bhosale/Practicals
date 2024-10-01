import java.applet.*;
import java.awt.*;
/*
<applet CODE="XORMode.class" WIDTH=250 HEIGHT=350>
</applet>
*/
public class XORMode extends Applet {


   public void paint( Graphics g )
   {
      setBackground(Color.white);
      g.setColor( Color.red);



      g.fillRect( 10, 50, 100,100);
	  g.setXORMode(Color.blue);

      g.setColor( Color.black );
      g.fillRect( 80, 50, 100,50);

      g.setColor( Color.pink );
	  g.fillOval( 100, 100, 50, 50 );

      g.setColor( Color.cyan );
      g.drawOval( 50, 120, 120, 50 );

      g.setColor( Color.yellow );
      g.drawArc( 10, 110, 80, 80, 90, 180 );

	  g.setColor( Color.orange);
      g.fillArc( 140, 40, 120, 120, 90, 45 );

      g.setColor( Color.magenta );
      g.fillArc( 150, 150, 100, 100, 90, 90 );

     g.setColor( Color.black );
      g.fillArc( 160, 160, 80, 80, 90, 90 );

      g.setColor( Color.green );
	  g.drawLine(10,10,200,200);
	  g.drawLine(200,10,10,200);
	  g.setPaintMode();

   }
}
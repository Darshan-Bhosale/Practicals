import java.awt.GraphicsEnvironment;
import java.applet.Applet;
import java.awt.*;

/*
<applet CODE="ShowFonts.class" WIDTH=200 HEIGHT=200>
</applet>
*/
public class ShowFonts extends Applet
   {
   public void paint(Graphics g)
      {
      GraphicsEnvironment ge = GraphicsEnvironment.getLocalGraphicsEnvironment();
      String[] names = ge.getAvailableFontFamilyNames();
      for ( int i=0; i<names.length; i++ )
         {
         g.drawString(names[i],10,10+10*i);
         }
      }
   }
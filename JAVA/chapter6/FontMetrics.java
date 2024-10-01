import java.applet.*;
import java.awt.*;

/*
<applet CODE="FontMetrics.class" WIDTH=400 HEIGHT=100>
</applet>
*/
public class FontMetrics extends Applet
{
  public void paint(Graphics g)
  {

      g.setColor (Color.red);
    String msg = "Set text in center";

    // Create the font and pass it to the  Graphics context
    g.setFont (new Font ("Monospaced",Font.BOLD,24));

    // Get measures needed to center the message
    FontMetrics fm = g.getFontMetrics();

    // How many pixels wide is the string
    int msg_width = fm.stringWidth(msg);

    // How far above the baseline can the font go?
    int ascent = fm.getMaxAscent();

    // How far below the baseline?
    int descent= fm.getMaxDescent();

    // Use the string width to find the starting point
    int msg_x = getSize().width/2 - msg_width/2;

    // Use the vertical height of this font to find
    // the vertical starting coordinate
    int msg_y = getSize().height/2 - descent/2 + ascent/2;

    g.drawString(msg, msg_x, msg_y);
  }
}
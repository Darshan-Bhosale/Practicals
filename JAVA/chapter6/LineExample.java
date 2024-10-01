import java.awt.*;
import java.applet.*;
/*
<applet CODE="LineExample.class" WIDTH=150 HEIGHT=150>
</applet>
*/

public class LineExample extends Applet
{

    public void paint(Graphics g)
    {

		// Get the width and height of the Applet
        int width = this.getSize().width;
        int height = this.getSize().height;
        // Fan 20 lines from the bottom-middle, across the top
        for (int counter=0; counter<=width; counter+=(width/20))
            g.drawLine(width/2, height, counter, 0);
    }
}
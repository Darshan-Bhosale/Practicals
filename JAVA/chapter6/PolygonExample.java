import java.awt.*;
import java.applet.*;
/*
<applet CODE="PolygonExample.class" WIDTH=400 HEIGHT=150>
</applet>
*/

public class PolygonExample extends Applet
{

    public void paint(Graphics g)
    {
		int xpoints[]={100,300,350,300,300,100,100,50};
		int ypoints[]={10,10,50,50,100,100,50,50};
		int npoints=8;
		g.drawPolygon(xpoints,ypoints,npoints);
		int xpoints1[]={180,220,220,180};
		int ypoints1[]={50,50,100,100};
		int npoints1=4;
		g.fillPolygon(xpoints1,ypoints1,npoints1);

    }
}
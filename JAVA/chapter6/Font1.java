import java.applet.Applet;
import java.awt.*;

/*
<applet CODE="Font1.class" WIDTH=400 HEIGHT=100>
</applet>
*/
public class Font1 extends Applet
{

public void paint(Graphics g)
{
Font f = new Font( "Courier", Font.ITALIC, 18 );

// prints "Courier", what you originally asked for
g.drawString("Logical Font name : "+f.getName(),10,30);

// prints "monospaced", the family you actually got
g.drawString("Font Family : "+f.getFamily(),10,50);

// prints "monospaced.italic", includes style you got
g.drawString("Face name : "+f.getFontName(),10,70);

// prints "18" as the size
g.drawString("Font size : "+f.getSize(),10,90);

// prints 2 which is Font.ITALIC
g.drawString("Font style : "+f.getStyle(),10,110);
}
}
import java.applet.Applet;
import java.awt.Graphics;

/*
<applet CODE="SimpleLife.class" WIDTH=400 HEIGHT=100>
</applet>
*/
public class SimpleLife extends Applet {

    StringBuffer buffer;

    public void init() {
        buffer = new StringBuffer();
        addItem("initializing... ");
    }

    public void start() {
        addItem("starting... ");
    }

    public void stop() {
        addItem("stopping... ");
    }

    public void destroy() {
        addItem("preparing for unloading...");
    }

    private void addItem(String newWord) {
        System.out.println(newWord);
        buffer.append(newWord);
        repaint();
    }

    public void paint(Graphics g) {
		//Draw the current string inside the rectangle.
        g.drawString(buffer.toString(), 5, 15);
    }
}
/*
D:\Books\Java\Chap 6\Chap 6 programs>javac SimpleLife.java

D:\Books\Java\Chap 6\Chap 6 programs>appletviewer SimpleLife.java
initializing...
starting...
stopping...
preparing for unloading...
D:\Books\Java\Chap 6\Chap 6 programs>
*/
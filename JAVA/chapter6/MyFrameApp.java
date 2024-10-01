import java.awt.*;
import java.applet.*;

class TestFrame extends Frame{
         public TestFrame(String s)
         {
                  super(s);
                  setBackground(Color.cyan);
                  setSize(250,100);
                  setVisible(true);
                     Graphics g = this.getGraphics();
                     g.drawString("Hi! I am  Frame ",50,50);
         }
}

class MyFrameApp {
         public static void main(String[] args) {
                  new TestFrame("Frame demo");
         }
}
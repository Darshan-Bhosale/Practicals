import java.applet.Applet;
import java.awt.*;

public class Grid1 extends Applet {
  LayoutManager Layout;
  Button [] Buttons;

  public Grid1 () {
    int i;
    
    Layout = new GridLayout (3, 2);
    setLayout (Layout);
    
    Buttons = new Button [5];
    for (i = 0; i < 5; ++i) {
      Buttons[i] = new Button ();
      Buttons[i].setLabel ("Button " + (i + 1));
      add (Buttons[i]);
    }
  }

}
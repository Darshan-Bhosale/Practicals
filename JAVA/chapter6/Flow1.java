import java.applet.Applet;
import java.awt.*;

public class Flow1 extends Applet {
  LayoutManager Layout;
  Button [] Buttons;

  public Flow1 () {
    int i;
    
    Layout = new FlowLayout ();
    setLayout (Layout);
    
    Buttons = new Button [5];
    for (i = 0; i < 5; ++i) {
      Buttons[i] = new Button ();
      Buttons[i].setLabel ("Button " + (i + 1));
      add (Buttons[i]);
    }
  }

}
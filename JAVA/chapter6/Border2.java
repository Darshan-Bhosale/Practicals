import java.applet.Applet;
import java.awt.*;

public class Border2 extends Applet
{
  LayoutManager Layout;
  Button [] Buttons;

  public Border2 ()
  {
    int i;

    Layout = new BorderLayout (10,10);
    setLayout (Layout);

    Buttons = new Button [4];
    TextArea ta=new TextArea();

    for (i = 0; i < 4; ++i) {
      Buttons[i] = new Button ();
      Buttons[i].setLabel ("Button " + (i + 1));
    }

    add (ta, BorderLayout.CENTER);
    add (Buttons[0], BorderLayout.NORTH);
    add (Buttons[1], BorderLayout.SOUTH);
    add (Buttons[2], BorderLayout.EAST);
    add (Buttons[3], BorderLayout.WEST);
}

public Insets getInsets()
{
	return new Insets(10,10,10,10);
}
}
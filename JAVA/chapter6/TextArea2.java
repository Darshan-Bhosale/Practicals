import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

public class TextArea2 extends Applet implements  TextListener
{
  /* Declaration */

  private TextArea Echo;
  private TextArea Echo2;


  public TextArea2 () {
    /* Instantiation */
    //Input = new TextField ("Input", 30);
    Echo = new TextArea (5, 30);
    Echo2 = new TextArea (5, 30);


    /* Configuration */

    Echo.addTextListener (this);
    Echo2.setEditable (false);

    /* Location */

    add (Echo);
    add (Echo2);

    /* Decoration */
    setBackground (Color.yellow);
    Echo.setBackground (Color.green);
    Echo.setText ("Enter text in this area");
  }

  public void textValueChanged (TextEvent e)
  {
    String Entry;
    Entry = Echo.getText ();
    Echo2.setText (Entry);
  }

}
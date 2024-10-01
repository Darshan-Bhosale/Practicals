import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class TextField2 extends Applet implements ActionListener {
  /* Declaration */
  TextField Input;
  TextField Echo;

  public TextField2 () {
    /* Instantiation */
    Input = new TextField ("Enter text", 35);
    Echo = new TextField ("Text entered above will appear here.", 35);


    /* Decoration */
    setBackground (Color.yellow);
    Input.setBackground (Color.green);
    Echo.setForeground (Color.blue);

    /* Location */

    add (Input);
    add (Echo);


    /* Configuration */
    Echo.setEditable (false);
    Input.addActionListener (this);
  }

  public void actionPerformed (ActionEvent e) {
    Echo.setText (Input.getText());
  }
}
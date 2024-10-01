import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

public class Button1 extends Applet implements ActionListener {
  /* Declaration */

  private Button Red;
  private Button Yellow;



  public Button1 ()
  {
    /* Instantiation */
    Red = new Button ();
    Yellow = new Button ("Yellow Background");

    /* Location */
    add (Red);
    add (Yellow);

    /* Decoration */
    Red.setLabel ("Red Background");

    /* Configuration */
    Red.addActionListener (this);
    Red.setActionCommand ("red");
    Yellow.addActionListener (this);


    /* Initialization */
    setBackground (Color.yellow);
    Yellow.setEnabled (false);

  }

  public void actionPerformed(ActionEvent e)
  {
    String Action;
    Action = e.getActionCommand ();
    if (Action.equals ("red"))
    {
      setBackground (Color.red);
      Red.setEnabled (false);
      Yellow.setEnabled (true);
    }
    else if (Action.equals ("Yellow Background"))
    {
      setBackground (Color.yellow);
      Red.setEnabled (true);
      Yellow.setEnabled (false);
    }

  }

}
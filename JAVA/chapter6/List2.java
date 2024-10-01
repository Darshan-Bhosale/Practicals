import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

public class List2 extends Applet implements ItemListener {
  /* Declaration */

  private List Selector;
  private Font SansSerif;

  public List2 () {
    /* Declaration */
    String [] ColorList;
    int i;

    /* Instantiation */
    ColorList = new String [9];
    SansSerif = new Font ("SansSerif", Font.BOLD, 14);

    Selector = new List ();

    /* Decoration */
    ColorList [0] = "Red";
    ColorList [1] = "Magenta";
    ColorList [2] = "Blue";
    ColorList [3] = "Cyan";
    ColorList [4] = "Green";
    ColorList [5] = "Yellow";
    ColorList [6] = "White";
    ColorList [7] = "Gray";
    ColorList [8] = "Black";
    for (i = 0; i < ColorList.length; ++i) {
      Selector.add (ColorList [i]);
    }
    Selector.setBackground (Color.yellow);
    Selector.setForeground (Color.red);
    Selector.setFont (SansSerif);

    /* Location */

    add (Selector);

    /* Configuration */
    Selector.addItemListener (this);

    /* Initialization */
    Selector.select (5);
    setBackground (Color.yellow);
  }

  public void itemStateChanged(ItemEvent e) {
    int Selection;
    Selection = Selector.getSelectedIndex();
    if (Selection == 0)
    {
      setBackground (Color.red);
    } else if (Selection == 1) {
      setBackground (Color.magenta);
    } else if (Selection == 2) {
      setBackground (Color.blue);
    } else if (Selection == 3) {
      setBackground (Color.cyan);
    } else if (Selection == 4) {
      setBackground (Color.green);
    } else if (Selection == 5) {
      setBackground (Color.yellow);
    } else if (Selection == 6) {
      setBackground (Color.white);
    } else if (Selection == 7) {
      setBackground (Color.gray);
    } else if (Selection == 8) {
      setBackground (Color.black);
    }
  }

}
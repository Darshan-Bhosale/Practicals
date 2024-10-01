import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class Scrollbar2 extends Applet implements AdjustmentListener {
  /* Declaration */

  private Scrollbar HSelector;
  private Scrollbar VSelector;

  private Label Report;

  public Scrollbar2 ()
  {
    /* Instantiation */
    setForeground(Color.blue);
    HSelector = new Scrollbar ();
    VSelector = new Scrollbar (Scrollbar.VERTICAL);

    Report = new Label ();

    /* Decoration */
    HSelector.setMaximum (300);
    HSelector.setOrientation (Scrollbar.HORIZONTAL);
    VSelector.setMaximum (300);
    Report.setAlignment (Label.CENTER);


    /* Location */
    add (Report);
    add (HSelector);
    add (VSelector);

    /* Configuration */
    HSelector.addAdjustmentListener (this);
    VSelector.addAdjustmentListener (this);

    /* Initialization */
    HSelector.setValue (100);
    VSelector.setValue (150);

    Report.setText ("H = " + HSelector.getValue() +
                    ", V = " + VSelector.getValue());
  }

  public void adjustmentValueChanged(AdjustmentEvent e)
  {
    Report.setText ("H = " + HSelector.getValue() +
                    ", V = " + VSelector.getValue());
    repaint();
  }


   public void paint (Graphics g)
   {
    g.drawOval (20,100,HSelector.getValue (), VSelector.getValue ());
   }
}


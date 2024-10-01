import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

public class Checkbox2 extends Applet implements ItemListener {
  /* Declaration */

  private Checkbox Bold;
  private Checkbox Italic;
  private Checkbox Black;
  private Checkbox Red;
  private Checkbox Blue;
  private CheckboxGroup TextColor;
  private Label Result;

  public Checkbox2 ()
  {
    /* Instantiation */
    Bold = new Checkbox ("Bold");
    Italic = new Checkbox ("Italic", true);
    TextColor = new CheckboxGroup ();
    Black = new Checkbox ("Black", TextColor, true);
    Blue = new Checkbox ("Blue", TextColor, false);
    Red = new Checkbox ("Red", TextColor, false);
    Result = new Label();

    /* Location */

    add (Bold);
    add (Italic);
    add (Black);
    add (Red);
    add (Blue);
    add (Result);

    /* Decoration */
    Bold.setLabel ("Bold");
    Result.setBackground (Color.yellow);
    Result.setText ("Change the font with the controls above.");
    setBackground (Color.yellow);
    Bold.setBackground (Color.yellow);
    Italic.setBackground (Color.yellow);


    Bold.addItemListener (this);
    Italic.addItemListener (this);
    Black.addItemListener (this);
    Red.addItemListener (this);
    Blue.addItemListener (this);
  }

  public void itemStateChanged(ItemEvent e) {
    String Text;
    int Style;
    Font ShowFont;
    Checkbox Selection;

    Text = "14 point";
    Style = 0;

    if (Bold.getState ())
    {
      Style = Style | Font.BOLD;
      Text += " boldface";
    }
    else
    {
      Text += " regular weight";
    }

    if (Italic.getState ())
    {
      Style = Style | Font.ITALIC;
      Text += " Italic";
    }
    else
    {
      Text += " Roman";
    }

    Text += " font";
    ShowFont = new Font ("SansSerif", Style, 14);

    Result.setFont (ShowFont);

    Selection = TextColor.getSelectedCheckbox ();

    if (Black.getState())
    {
      Result.setForeground (Color.black);
    }
    else if (Selection == Red)
    {
      Result.setForeground (Color.red);
    }
    else if (e.getSource() == Blue)
    {
      Result.setForeground (Color.blue);
    }
    Result.setText (Text);
  }

}
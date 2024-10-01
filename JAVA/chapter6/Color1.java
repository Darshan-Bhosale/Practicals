import java.awt.*;
import java.applet.*;

public class Color1 extends Applet {

  public void paint (Graphics g)
  {

    Color Pigment;
    int Red;
    int Green;
    int Blue;
    int X;
    Red = 255;
    Green = 0;
    Blue = 0;
    X = 0;
    while (X < 255) {
      Pigment = new Color (Red, Green, Blue);
      g.setColor (Pigment);
      g.drawLine (X, 0, X, 100);
      Red = Red - 1;
      Green = Green + 1;
      X = X + 1;
    }
    while (X < 511) {
      Pigment = new Color (Red, Green, Blue);
      g.setColor (Pigment);
      g.drawLine (X, 0, X, 100);
      Green = Green - 1;
      Blue = Blue + 1;
      X = X + 1;
    }
  }
}

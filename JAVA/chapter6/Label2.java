import java.applet.*;
import java.awt.*;
import java.awt.event.*;


public class Label2 extends Applet {
  /* Declaration */

  private Label Label1;
  private Label Label2;
  private Label Label3;
  private Label Label4;
  private Label Label5;
  private Label Label6;
  private Label Label7;

  public Label2 () {

    /* Instantiation */


    Label1 = new Label ("A Label with yellow background");
    Label2 = new Label ("A Label with Blue text");
    Label3 = new Label ();

    /* Location */

    add (Label1);
    add (Label2);
    add (Label3);


    /* Decoration */
    Label1.setBackground (Color.yellow);
    Label2.setForeground (Color.blue);
    Label3.setText ("Text added with setText");
  }

}
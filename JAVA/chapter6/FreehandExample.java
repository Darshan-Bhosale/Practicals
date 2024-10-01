import java.awt.*;
import java.applet.*;
import java.awt.event.*;
public class FreehandExample extends Applet implements MouseListener, MouseMotionListener
{
    private Point start, end;
    public FreehandExample()
    {
        this.setBackground(new Color(255, 204, 200));
        this.setForeground(new Color(255, 0, 0));
        // Add the Event Listeners
        this.addMouseListener(this);
        this.addMouseMotionListener(this);
    }
    // Capture the mousePressed event
    public void mousePressed(MouseEvent e)
    {
        start = new Point(e.getX(), e.getY());
    }
    // Define the other events for MouseListener
    public void mouseClicked(MouseEvent e) {}
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void mouseReleased(MouseEvent e) {}

    // Capture the mouseDrag event
    public void mouseDragged(MouseEvent e)
    {
        // Get the current state of the graphics
        Graphics g = this.getGraphics();

        end = new Point(e.getX(), e.getY());
        g.drawLine(start.x, start.y, end.x, end.y);
        start = end;
    }
    // Define the other events for MouseMotionListener
    public void mouseMoved(MouseEvent e) {}
}
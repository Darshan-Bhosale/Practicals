
import java.applet.Applet;
import java.awt.*;
import java.awt.event.*;

public class CardLayoutEx extends Frame
{

    private int currentCard = 1;
    private Panel cardPanel;
    private CardLayout cl;

    public CardLayoutEx()
    {

        setTitle("Card Layout Example");
        setSize(300, 150);
        cardPanel = new Panel();

     	cl = new CardLayout();
        cardPanel.setLayout(cl);
        Panel p1 = new Panel();
        Panel p2 = new Panel();
        Panel p3 = new Panel();
        Panel p4 = new Panel();
        Label l1 = new Label("Card1");
        Label l2 = new Label("Card2");
        Label l3 = new Label("Card3");
        Label l4 = new Label("Card4");


        p1.add(l1);
        p2.add(l2);
        p3.add(l3);
        p4.add(l4);
        cardPanel.add(p1, "1");
        cardPanel.add(p2, "2");
        cardPanel.add(p3, "3");
        cardPanel.add(p4, "4");

        Panel buttonPanel = new Panel();
        Button firstBtn = new Button("First");
        Button nextBtn = new Button("Next");
        Button previousBtn = new Button("Previous");
        Button lastBtn = new Button("Last");

        buttonPanel.add(firstBtn);
        buttonPanel.add(nextBtn);
        buttonPanel.add(previousBtn);
        buttonPanel.add(lastBtn);

        firstBtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent arg0) {
                cl.first(cardPanel);
                currentCard = 1;
            }
        });

        lastBtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent arg0) {
                cl.last(cardPanel);
                currentCard = 4;
            }
        });

        nextBtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent arg0) {
                  cl.next(cardPanel);

            }
        });

        previousBtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent arg0) {
                 cl.previous(cardPanel);

            }
        });

  		add(cardPanel, BorderLayout.NORTH);
		add(buttonPanel, BorderLayout.SOUTH);


    }
    public static void main(String[] args) {
        CardLayoutEx cl = new CardLayoutEx();
       // cl.setDefaultCloseOperation(Frame.EXIT_ON_CLOSE);
        cl.setVisible(true);
    }
}
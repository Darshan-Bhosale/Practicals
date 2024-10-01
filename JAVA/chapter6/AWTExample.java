import java.awt.*;
import java.awt.event.*;

public class AWTExample extends Frame
{

    // Object fields
    private Button copyButton;
    private Button cutButton;
    private Button pasteButton;
    private Button  exitButton;


    public AWTExample()
    {

        super("Simple AWT Example");
        setSize(450, 250);

        addWindowListener(
                new WindowAdapter() {
                    public void windowClosing(WindowEvent e) {
                        System.exit(0);
                    }
                }
        );

        ActionListener buttonListener = new ActionListener() {

            public void actionPerformed(ActionEvent ae) {

                String action = ae.getActionCommand();

                if (action.equals("Exit")) {
                    dispose();
                    System.out.println(action);
                    System.exit(0);
                } else {
                    System.out.println(action);
                }
            }

        };


        // Toolbar Panel
        Panel toolbarPanel = new Panel();
        toolbarPanel.setLayout(new FlowLayout(FlowLayout.LEFT));

        copyButton = new Button("Copy");
        copyButton.addActionListener(buttonListener);
        toolbarPanel.add(copyButton);

        cutButton = new Button("Cut");
        cutButton.addActionListener(buttonListener);
        toolbarPanel.add(cutButton);

        pasteButton = new Button("Paste");
        pasteButton.addActionListener(buttonListener);
        toolbarPanel.add(pasteButton);

        add(toolbarPanel, BorderLayout.NORTH);

        // Bottom Panel
        Panel bottomPanel = new Panel();

        exitButton = new Button("Exit");
        exitButton.addActionListener(buttonListener);
        bottomPanel.add(exitButton);

        add(bottomPanel, BorderLayout.SOUTH);
}


public static void main(String[] args)
{

        AWTExample mainFrame = new AWTExample();
        mainFrame.setVisible(true);

    }

}
import java.applet.*;
import java.awt.*;
import java.awt.event.*;

public class Emp extends Applet implements ItemListener, ActionListener
{
  /* Declaration */

  private Choice EmpQ,EmpDept;
  private TextField EmpName;
  private Font SansSerif;
  private Label lEmpName;
  private Label lEmpQ;
  private Label lEmpDept;
  private Button insert;
  private Panel tp,bp;
  String empquali, empdept;

  String EmpTable[][]=new String[20][3];
  int p=0;
  public Emp ()
  {
      int i;

    SansSerif = new Font ("SansSerif", Font.BOLD, 14);

    EmpQ=new Choice();
    EmpDept=new Choice();
    EmpName=new TextField();
    insert=new Button("INSERT");

    tp=new Panel();
    bp=new Panel();

    lEmpName=new Label("Employee Name : ");
    lEmpQ=new Label("Employee Qualification : ");
    lEmpDept=new Label("Employee Department : ");


    EmpDept.insert("--select department--",0);
    EmpDept.insert("EXTC",1);
    EmpDept.insert("ETRX",2);
    EmpDept.insert("IE",3);
    EmpDept.insert("MECH",4);
    EmpDept.insert("IT",5);
    EmpDept.insert("COMP",6);


    EmpQ.insert ("--select qualification--",0);
    EmpQ.insert ("UG- Under Graduation",1);
    EmpQ.insert ("G - Graduation",2);
    EmpQ.insert ("PG- Post Graduation",3);


    EmpDept.setBackground (Color.yellow);
    EmpDept.setForeground (Color.red);
    EmpDept.setFont (SansSerif);

    EmpQ.setBackground (Color.yellow);
	EmpQ.setForeground (Color.red);
    EmpQ.setFont (SansSerif);

    tp.setLayout(new GridLayout(4,2,20,20));
    bp.setLayout(new FlowLayout());


    tp.add(lEmpName);
    tp.add(EmpName);
    tp.add(lEmpQ);
    tp.add(EmpQ);
    tp.add(lEmpDept);
    tp.add(EmpDept);
	bp.add(insert);


	add(tp);
	add(bp);
    /* Configuration */
    EmpQ.addItemListener (this);
    EmpDept.addItemListener (this);
	EmpName.setEditable (true);
    EmpName.addActionListener (this);
    insert.addActionListener (this);

    /* Initialization */
    EmpQ.select(0);
    EmpDept.select(0);

    setBackground (Color.yellow);
  }

   public void actionPerformed (ActionEvent e)
   {
	   String Action;
	   Action = e.getActionCommand ();
    if (Action.equals ("INSERT"))
    {

		EmpTable[p][0]=EmpName.getText();
		EmpTable[p][1]=empquali;
		EmpTable[p][2]=empdept;
		EmpName.setText("");
		EmpQ.select(0);
        EmpDept.select(0);
	}
	System.out.println(EmpTable[p][0]+", "+EmpTable[p][1]+","+EmpTable[p][2]+"inserted into table");
	p++;

  }

  public void itemStateChanged(ItemEvent e)
  {
    int Selection;
    Selection = EmpQ.getSelectedIndex();
    empquali=EmpQ.getItem(Selection);
    Selection = EmpDept.getSelectedIndex();
	empdept=EmpDept.getItem(Selection);
  }

}
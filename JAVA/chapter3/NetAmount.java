/* Program to compute net amount paid by a customer */

import java.io.DataInputStream;     // to load DataInputStream class         

class NetAmount
{
	public static void main(String args[])
	{
		double mill=0.0,handloom=0.0,total=0.0,net_amt=0.0;
		double dis_mill=0.0,dis_handloom=0.0;
		int range=0;
		DataInputStream in = new DataInputStream(System.in); 
		
		try
		{
		      	System.out.print("Enter amount of Mill cloth : ");
		      	mill= Double.valueOf(in.readLine()).doubleValue(); // reading Double value 
			System.out.print("Enter amount of Handloom items : ");
		      	handloom= Float.valueOf(in.readLine()).floatValue(); // reading Double value 
			total = mill+handloom;
			
		}
		catch(Exception e) {  System.out.println("I/O Error");   }
		
		if(total>=0&&total<=100)
			range = 1;
		if(total>=101&&total<=200)
			range = 2;
		if(total>=201&&total<=300)
			range = 3;
		if(total>300)
			range = 4;

		switch(range)
		{
			case 1 :
				dis_handloom = handloom-(handloom*5/100.0);
				net_amt = mill +  dis_handloom;
				break;
			case 2 :
				dis_mill = mill-(mill*5/100);
				dis_handloom = handloom-(handloom*7.5/100.0);
				net_amt = dis_mill +  dis_handloom;
				break;
			case 3 :
				dis_mill = mill-(mill*7.5/100);
				dis_handloom = handloom-(handloom*10.0/100.0);
				net_amt = dis_mill +  dis_handloom;
				break;
			case 4 :
				dis_mill = mill-(mill*10.0/100);
				dis_handloom = handloom-(handloom*15.0/100.0);
				net_amt = dis_mill +  dis_handloom;
				break;
			default:
				break;
		}

		System.out.println("Net Amount : "+net_amt);
	}
}






;
				
/* Program to demonstrates the - equals() Versus ==*/

class equals_vs_equalstooperatorDemo
{
    public static void main(String args[ ])
    {
	String s1="Java";
	String s2=new String(s1);
	
	System.out.println(s1+" equals "+s2+" --> "+ s1.equals(s2));
	System.out.println(s1+" == "+s2+" --> "+ (s1==s2));
    }
}

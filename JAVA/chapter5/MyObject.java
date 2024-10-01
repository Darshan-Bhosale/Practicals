public class MyObject extends Object
{
    public static void main(String[] args)
    {
        // Create a new instance of MyObject.
        MyObject obj = new MyObject();

        // Get the hash code associated with MyObject.
        int hash = obj.hashCode();

        // Print out the hash code for obj.
        System.out.println("The hash code for obj is " +
            hash);
    }
}
/*
The hash code for obj is 17523401
*/
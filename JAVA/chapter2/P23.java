class complex
{
  	float x,y;

  	complex ()
	{
		x=0.0F;
		y=0.0F;
	}

	complex(float a) 
	{
		x=y=a;
	}

	complex(float real,float imag)
	{
		x=real;
		y=imag;
	}

	void show()
	{
		System.out.println(x+" + j"+y);
	}
	
	void sum(complex c1,complex c2)
	{
		x = c1.x + c2.x;
		y = c1.y + c2.y;
	}
}

class P23
{
	public static void main(String args[ ])
	{
		complex A = new complex(8.7F,2.5F);
		complex B= new complex(2.6F);
		complex C= new complex();
		C.sum(A,B);
		C.show();
	}
}
		

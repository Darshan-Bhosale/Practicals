abstract class Volume
{
final float pi=3.14f;
protected int r;
protected float v;
abstract float DisplayVolume();
}

class Sphere extends Volume
{

float DisplayVolume()
{
v=(4*pi*r*r*r)/3;
return(v);
}
}

class HemiSphere extends Volume
{

float DisplayVolume()
{
v=(2*pi*r*r*r)/3;
return(v);
}
}

class Vol
{
public static void main(String args[])
{

Sphere s=new Sphere();
HemiSphere hs=new HemiSphere();
s.r=5;
hs.r=5;
System.out.println("Volume of Sphere  : "+s.DisplayVolume());
System.out.println("Volume of Hemisphere  : "+hs.DisplayVolume());
}
}
/*
Volume of Sphere  : 523.3333
Volume of Hemisphere  : 261.66666

*/
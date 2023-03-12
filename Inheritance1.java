import java.lang.*;
class Base
{
    public int i;
    public int j;


    public Base()
    {
        System.out.println("inside base constructor");

    }
    public void fun()
    {
        System.out.println("inside base fun");

    }
    public void fun(int x)
    {
        System.out.println("inside base paramiterised fun");
        
    }
    public void gun()
    {
        System.out.println("inslide base gun");

    }

}
class Derived extends Base
{
    public int x;
    public int j;

    public Derived()
    {
        System.out.println("inside dirived constructor");
    }
    public void sun()
    {
        System.out.println("inside derived sun");
    }
}
class Inheritance1
{
    static
        {
            System.out.println("inside static block");
        }
    public static void main(String arg[])

    {
        System.out.println("inside main");
    
    Derived dobj = new Derived();
    dobj.fun();
    dobj.fun(11);
    dobj.gun();
    dobj.sun();
    }
    
}
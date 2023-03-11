import java.lang.*;
class Demo
{
    public int i;
    public int j;

    public Demo()
    {
        this.i = 0;
        this.j = 0;

        System.out.println("inside defualt constuctor");


    }
    public Demo(int x, int y)
    {
        this.i = x;
        this.j = y;
        System.out.println("inside parameterised consturctor");


    }
    public void fun()
    {
        System.out.println("inside fun");

    }

    public void gun()
    {
        System.out.println("inside gun");
    }

}
class  Encapsulation
{
    public static void main(String arg[])
    {
        Demo dobj  = new Demo();
        dobj.fun();
        dobj.gun();
        System.out.println(dobj.i);

       Demo dobjX = new Demo(11, 21);
       dobjX.fun();
       dobjX.gun();
       System.out.println(dobjX.i);


    }
}

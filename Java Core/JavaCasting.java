class Casting
{
    public static void main(String a[]) 
    {
        //Integers To Byte If integer value is less than 127..
        byte b = 127;
        int s = 12;
        b = (byte)s;
        System.out.println(b);
        //Float To Int
        float f = 5.6f;
        int x = (int)f;
        System.out.println(x);
        //Cocept Of Type Promotion
        byte d = 126;
        byte c = 10;
        int result = d*c;
        System.out.println(result);

    }
}
class Computer
{
    public void playMusic()
    {
        System.out.println("Music Playing..");
    }
    public String getMePen(int cost)
    {
        return "Pen";
    }
}

class Demo
{
    public static void main(String a[])
    {
        Computer obj = new Computer();
        obj.playMusic();
        String str = obj.getMePen(12);
        System.out.println(str);
    }
}
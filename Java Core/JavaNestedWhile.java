class NestedWhile
{
    public static void main(String args[]) 
    {
        int i = 1;
        //while(true) for infinite loop
        while(i<=4)
        {
            System.out.println("Prakhar " + i);
            i++;
            int j = 1;
            while(j<=3)
            {
                System.out.println("GLA " + j);
                j++;
            }
        }
        System.out.println("Love You " + i);
    }
}
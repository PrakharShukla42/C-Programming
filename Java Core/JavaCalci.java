class Calculator
{
    public int add(int n1,int n2)
    {
        int r = n1 + n2;
        System.out.println("in Add");
        return r;
    }
}
class calci
{
    public static void main(String a[])
    {
        Calculator calc = new Calculator();

        int result = calc.add(4,5);
        System.out.println(result);
    }
}
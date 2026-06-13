class Logic 
{
    void findMin(int a, int b,int c)
    {    
        if( a < b && a  < c)
        {
            System.out.println(a+" is lesser than other numbers ");
        }
        else if(b < c && b < a)
        {
            System.out.println(b+" is lesser than other numbers");
        }
        else
        {
            System.out.println(c+" is lesser than other numbers");    
        }
   }
}

class Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMin(3,7,2);
    }
}
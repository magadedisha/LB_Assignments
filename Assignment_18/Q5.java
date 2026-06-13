class Logic 
{
    void checkSign(int num)
    {  
        if(num > 0)
        {
            System.out.println("Given number is a positive number.");    
        }
        else if(num < 0)
        {
            System.out.println("Given number is a negative number.");    
        }
        else
        {
            System.out.println("Given number is a Zero");               
        }       
   }
}

class Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}
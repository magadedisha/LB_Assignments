class Logic 
{
    void printDivisibleBy2and3(int num)
    {       
      if(num % 2 == 0 && num % 3 == 0)
      {
        System.out.println("Number is divisible") ;         
      }
      else
      {
        System.out.println("Number is not divisible") ;         
      }
    }
}

class Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}            
      
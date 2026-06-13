class Logic 
{
    void checkPrime(int num)
    {
        int iCnt = 0;

        for(iCnt = 2; (iCnt <= num/2); iCnt++)      //O(N/2)
        {
            if((num % iCnt == 0))
            {
                break;
            }
        }  

        if(iCnt >= (num/2) + 1)     //prime number or not 
        {
            System.out.println("Number is Prime");
        }
        else
        {
            System.out.println("Number is Prime");
        }
   }
}

class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPrime(11);
    }
}
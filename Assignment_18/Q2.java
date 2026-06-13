class Logic 
{
    void printEvenNumbers(int num)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)      //O(N/2)
        {
            if(iCnt % 2 == 0)
            {            
                System.out.println(iCnt);
            }
        }
        
    }
}

class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}            
      
class Logic 
{
    void printOddNumbers(int num)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= num; iCnt++)      //O(N/2)
        {
            if(iCnt % 2 == 1)
            {            
                System.out.println(iCnt);
            }
        }
        
    }
}

class Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printOddNumbers(20);
    }
}            
      
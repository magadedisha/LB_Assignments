class Logic 
{
    void countFactors(int num)
    {
        int iCnt, iCountFactor = 0;
      
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(num  % iCnt  == 0)
            {
                iCountFactor++;
            }
            
        }    
                 System.out.println(iCountFactor);

   }
}

class Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countFactors(20);
    }
}
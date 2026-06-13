class Logic 
{
    void countEvenOddRange(int num)
    {
        int iCnt = 0;
        int iEvenCount = 0;
        int iOddCount = 0;
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(iCnt  % 2 == 0)
            {
                iEvenCount++;
            }
            else
            {
                iOddCount++;
            }
        }    
            System.out.println("THe count of Even is : "+ iEvenCount + "  and the count of Odd is : " + iOddCount);

   }
}

class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
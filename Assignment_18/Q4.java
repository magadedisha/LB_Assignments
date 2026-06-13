class Logic 
{
    void sumEvenOddDigits(int num)
    {
        int iDigit , iCnt = 0;
        int iSumEven = 0;
        int iSumOdd = 0;
        int iReserve = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iReserve = iDigit;

            if(iReserve % 2 == 0)
            {
                iSumEven = iSumEven + iReserve;
            }
            else
            {
                iSumOdd = iSumOdd + iReserve;
            }

            num = num / 10;            
        }
        
        System.out.println("Sum of even digits are : "+iSumEven);
        System.out.println("Sum of odd digits are : "+iSumOdd);

    }
}

class Q4
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}
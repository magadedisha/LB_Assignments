class Logic 
{
    void sumOfDigits(int num)
    {
        int iDigit , iCnt, iDigitSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iDigitSum = iDigitSum + iDigit;
            num = num / 10;            
        }

        System.out.println("The summation of digits of a number are : " + iDigitSum);
   }
}

class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}
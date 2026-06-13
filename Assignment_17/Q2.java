class Logic 
{
    void findMax(int a, int b)
    {
        int iDigit , iCnt = 0;
        int iRev = 0;
        int iTemp = 0;
        iTemp = num;

        while(num != 0)
        {
            iDigit = num % 10;
            iRev = (iRev * 10) + iDigit;
            num = num / 10;            
        }

        if(iTemp == iRev)
        {
            System.out.println("The given number is Palindrome.");
        }
        else
        {
            System.out.println("The given number is not a Palindrome.");
        }
   }
}

class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.findMax(121);
    }
}
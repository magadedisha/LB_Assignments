class Logic 
{
    void productOdDigits(int num)
    {
        int iDigit = 0;
        int iProduct = 1;

       while ( num != 0)
        {
            iDigit = num % 10;
            iProduct = iProduct * iDigit;
            num = num / 10;
        }
        System.out.println("Product of a Digits are  : " + iProduct);

   }
}

class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.productOdDigits(234);
    }
}
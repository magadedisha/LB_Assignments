class Logic 
{
    void calculatePower(int base, int exp)
    {  
        int iCnt = 0;
        int result = 1;
        for(iCnt = 1; iCnt <= exp; iCnt++)
        {
            result = result * base;
        }
         System.out.println(result);               

   }
}

class Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.calculatePower(2, 5);
    }
}
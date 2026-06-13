class Logic 
{
    void sumEvenNumbers(int num)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum =  iSum + iCnt;
            }
       
        }    
        System.out.println("Sumation of even numbers if N is : " + iSum);

   }
}

class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}
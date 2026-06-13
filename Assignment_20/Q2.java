class Logic 
{
    void printReverse(int num)
    {
        int iCnt = 0;
        for(iCnt = num; iCnt >= 1; iCnt--)
        {
            System.out.println(iCnt);
        }    

   }
}

class Q2
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}
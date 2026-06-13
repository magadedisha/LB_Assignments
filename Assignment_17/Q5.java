class Logic 
{
    void printTable(int num)
    {  
        int iCnt = 0;

        System.out.println("Table of a given number is : ");    
        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(num * iCnt);            
        }
   }
}

class Q5
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}
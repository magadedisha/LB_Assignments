class Logic 
{
    void checkPerfect(int num)
    {   
        int iCnt = 0;
        int iSum = 0; // Initialize sum to 0
        
        // Fix 1: Use '<=' for comparison so the loop runs from 1 to num/2
        for (iCnt = 1; iCnt <= num/2; iCnt++)
        {
            if(num % iCnt == 0)
            {            
                iSum = iSum + iCnt; // Fix 3: Add the divisor to our running total
            } 
        }
        
        // Fix 2: Check the total sum and print the result ONCE, outside the loop
        if (iSum == num)
        {
            System.out.println("Number is perfect");
        }
        else
        {
            System.out.println("Number is not perfect");
        }
    }
}

class Q3
{
    public static void main(String A[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);  // Output: Number is perfect
        obj.checkPerfect(12); // Output: Number is not perfect
    }
}
import java.util.Scanner;

class Bitwise
{
    public int CountOne(int iNo)
    {
        int iCount = 0;
        int iMask = 0x1;

        // Loop through all 32 bits of the integer
        for(int i = 1; i <= 32; i++)
        {
            if((iNo & iMask) != 0)
            {
                iCount++;
            }
            iNo = iNo >> 1;
        }
        return iCount;
    }
}

public class Q1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = bobj.CountOne(iValue);

        System.out.println("Number of ON bits : " + iRet);
        
        sobj.close();
    }
}

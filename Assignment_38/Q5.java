import java.util.Scanner;

class Bitwise
{
    public int ToggleBitRange(int iNo, int iStart, int iEnd)
    {
        int iMask = 0;
        int iTempMask = 0x1;

        // Build a range mask dynamically by shifting and combining bits
        for(int i = iStart; i <= iEnd; i++)
        {
            iMask = iMask | (iTempMask << (i - 1));
        }

        int iRet = iNo ^ iMask;
        return iRet;
    }
}

public class Q5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        int iValue = 0, iStart = 0, iEnd = 0, iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter start position : ");
        iStart = sobj.nextInt();

        System.out.println("Enter end position : ");
        iEnd = sobj.nextInt();

        iRet = bobj.ToggleBitRange(iValue, iStart, iEnd);

        System.out.println("Updated no  : " + iRet);
        
        sobj.close();
    }
}

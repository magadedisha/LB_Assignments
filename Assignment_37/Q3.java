import java.util.Scanner;

class Bitwise
{
    public int OnBit(int iNo, int iPos)
    {
        int iMask = 0x1;
        int iRet = 0;

        iMask = iMask << (iPos - 1);

        iRet = iNo | iMask;
        return iRet;
    }
}

public class Q3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        int iValue = 0;
        int iPosition = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position : ");
        iPosition = sobj.nextInt();

        iRet = bobj.OnBit(iValue, iPosition);

        System.out.println("Updated no  : " + iRet);
        
        sobj.close();
    }
}

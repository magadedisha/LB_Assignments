import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 0x1;
        int iMask2 = 0x1;
        int iMask = 0;
        int iResult = 0;

        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        iMask = iMask1 | iMask2;

        iResult = iNo & iMask;

        if(iResult != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class Q4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        int iValue = 0, iPosition1 = 0, iPosition2 = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter first position : ");
        iPosition1 = sobj.nextInt();

        System.out.println("Enter second position : ");
        iPosition2 = sobj.nextInt();

        bRet = bobj.ChkBit(iValue, iPosition1, iPosition2);

        if(bRet == true)
        {
            System.out.println("Result : TRUE");
        }
        else
        {
            System.out.println("Result : FALSE");
        }
        
        sobj.close();
    }
}

import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask1 = 0x1;
        int iMask2 = 0x1;
        int iMask = 0;
        int iResult = 0;

        iMask1 = iMask1 << 4;      // 5th bit
        iMask2 = iMask2 << 17;     // 18th bit

        iMask = iMask1 | iMask2;

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class Q2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        int iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        bRet = bobj.ChkBit(iValue);

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

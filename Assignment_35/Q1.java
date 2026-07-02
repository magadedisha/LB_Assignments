import java.util.Scanner;

class Bitwise
{
    public boolean ChkBit(int iNo)
    {
        int iMask = 0x1;
        int iResult = 0;

        iMask = iMask << 14;     // 15th bit (15 - 1 = 14)

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

public class Q1
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

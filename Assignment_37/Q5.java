import java.util.Scanner;

class Bitwise
{
    public int ToggleBit(int iNo)
    {
        int iMask1 = 0x0F;
        int iMask2 = 0xF0000000;
        int iMask = 0;
        int iRet = 0;

        iMask = iMask1 | iMask2;

        iRet = iNo ^ iMask;
        return iRet;
    }
}

public class Q5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        int iValue = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        iRet = bobj.ToggleBit(iValue);

        System.out.println("Updated no  : " + iRet);
        
        sobj.close();
    }
}

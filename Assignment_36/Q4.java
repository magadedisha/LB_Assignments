import java.util.Scanner;

public class Q4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iMask1 = 0x1;
        int iMask2 = 0x1;
        int iMask = 0;
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iMask1 = iMask1 << 6;

        iMask2 = iMask2 << 9;

        iMask = iMask1 | iMask2;

        iRet = iNo ^ iMask;

        System.out.println("Updated no  : " + iRet);
        
        sobj.close();
    }
}

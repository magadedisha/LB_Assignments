import java.util.Scanner;

public class Q3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iMask = 0x1;
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iMask = iMask << 6;

        iRet = iNo ^ iMask;

        System.out.println("Updated no  : " + iRet);
        
        sobj.close();
    }
}

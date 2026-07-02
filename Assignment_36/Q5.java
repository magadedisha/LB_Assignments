import java.util.Scanner;

public class Q5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iMask = 0x0F;
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iRet = iNo | iMask;

        System.out.println("Updated no  : " + iRet);
        
        sobj.close();
    }
}

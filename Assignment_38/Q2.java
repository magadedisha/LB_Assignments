import java.util.Scanner;

class Bitwise
{
    public void CommonBits(int iNo1, int iNo2)
    {
        int iMask = 0x1;
        int iCommon = 0;

        // Combine common bits using bitwise AND
        iCommon = iNo1 & iNo2;

        System.out.print("Common ON bit positions : ");
        for(int i = 1; i <= 32; i++)
        {
            if((iCommon & iMask) != 0)
            {
                System.out.print(i + " ");
            }
            iCommon = iCommon >> 1;
        }
        System.out.println();
    }
}

public class Q2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Bitwise bobj = new Bitwise();

        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        bobj.CommonBits(iValue1, iValue2);
        
        sobj.close();
    }
}

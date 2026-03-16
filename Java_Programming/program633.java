import java.util.*;

class program633
{
    public static void main(String A[])
    {
        int iNo = 0, iMask = 0, iResult = 0, iPos = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter position : ");
        iPos = sobj.nextInt();

        iMask = 0x1;

        iMask = iMask << (iPos - 1);

        iResult = iNo & iMask;

        if(iResult == iMask)
        {
            System.out.println(iPos+"th bit is on");
        }
        else
        {
            System.out.println(iPos+"th bit is off");
        }
    }
    
}

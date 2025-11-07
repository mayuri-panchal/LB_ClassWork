import java.util.*;

class Number
{
    public int CalculateFactorial(int iNo)
    {
       int i = 0, iFact = 1;

       for(i = iNo; i >= 1; i--)
       {
            iFact *= i;
       }

       return iFact;
    }
} // End of Number class

class program86
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int iRet = 0;
        
        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(iValue); 

        System.out.println("Factorial is : "+iRet);

        // Important
        
        sobj = null;
        nobj = null;

        System.gc();
    }
    
}

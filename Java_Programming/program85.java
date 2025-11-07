import java.util.*;

class Number
{
    public boolean CheckPerfect(int iNo)
    {
        int i = 0;
        int iSum = 0;

        // Updator
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        // Reverse loop
        for(i = (iNo/2); (i >= 1) && (iSum < iNo); i--)
        {
            if((iNo % i) == 0)
            {
                //System.out.println(i);
                iSum += i; 
            }
        }
        return (iSum == iNo);  
        
    }
} // End of Number class

class program85
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean bRet = false;
        
        System.out.println("Enter number:");
        iValue = sobj.nextInt();

        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue); 

        if(bRet == true)
        {
            System.out.println(iValue+" is perfect number");
        }
        else
        {
            System.out.println(iValue+" is not perfect number");
        }

        // Important
        
        sobj = null;
        nobj = null;

        System.gc();
    }
    
}

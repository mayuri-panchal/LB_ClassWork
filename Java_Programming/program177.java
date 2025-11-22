/*
   input : 8
   Output : 1 A 3 B 5 C 7 D
    
*/
import java.util.Scanner;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
       // int i = 65;
        char ch = 'A';

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 != 0)
            {   
                System.out.print(iCnt+"\t");
            }
            else
            {
                System.out.printf("%c\t",ch);
                ch++;
            }
        }
        System.out.println();
    }
}
class program177
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the frequency:");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}

import java.util.*;

class program619
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int no = 0;
        int bin = 0;

        System.out.println("Enter decimal no : ");
        no = sobj.nextInt();

        while(no != 0)
        {
            bin = no % 2;
            System.out.print(bin);
            no = no/2;
        }
    }
    
}

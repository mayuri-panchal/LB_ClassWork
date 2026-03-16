import java.util.*;

class program619
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int no = 0;
        int bin = 0;
        int count = 0;

        System.out.println("Enter decimal no : ");
        no = sobj.nextInt();

        while(no != 0)
        {
            bin = no % 2;
            count = count + bin;
            no = no/2;
        }

        System.out.println(count);
    }
    
}

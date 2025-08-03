import java.util.Scanner;
       public class ArrSize {
    public static void main(String[] args) {
        int size,i;
        Scanner sc=new Scanner(System.in);
        System.out.print("enter size of array");
         size=sc.nextInt();
        int a[]= new int[size];

        for( i=0; i<size; i++)
        {
            a[i]=sc.nextInt();
        }
        System.out.print("print array element");
        for(i=0; i<size; i++)
        {
            System.out.print(a[i]+" ");
        }
    }
}

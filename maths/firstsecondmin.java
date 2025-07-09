import java.lang.*;
public class firstsecondmin
{
    public static void main(String[] args)
    {
        int a[]={1,2,3,4,5,6};
        int firstmin=a[0];
        int secondmin=a[0];
        int i;
        for(i=1; i<a.length; i++)
        {
         if(a[i]<firstmin)
         {
          if(firstmin<secondmin)
          {
           secondmin=firstmin;
          }
          firstmin=a[i];
         }
        }
        System.out.println("First Minimum value is:"+firstmin);
        System.out.println("Second Minimum value is:"+secondmin);
      }
}

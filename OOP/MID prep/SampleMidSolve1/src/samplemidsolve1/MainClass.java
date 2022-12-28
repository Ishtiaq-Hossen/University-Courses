
package samplemidsolve1;

import java.util.ArrayList;
import java.util.Scanner;


public class MainClass {

    
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int a;
        ComplexList list=new ComplexList();
        do{
            
            
            a=s.nextInt();
            if(a==2)
            {
                System.out.println("Exited");
                break;
            }
            else
            {                
                list.add(new Complex().setComplex());   
            }
                     
        }while(true);
        
        int n=s.nextInt();
        Complex[] cArr=new Complex[n];
        list.augment(cArr);
        int lower,upper;
        lower=s.nextInt();
        upper=s.nextInt();
        //System.out.println(list.cList.size());
        list.display(lower, upper);
        
    }
    
}


package samplemidsolve1;

import java.util.Random;
import java.util.Scanner;


public class Complex {
    int real,img;
    public Complex(int a,int b)
    {
        this.real=a;
        this.img=b;
    }
    public Complex()
    {
        
    }
    public Complex setComplex()
    {
        //Complex a=new Complex();
        //Scanner s=new Scanner(System.in);
        Random s=new Random();
       // System.out.print("Enter real part: ");
        real=s.nextInt(100);
       // System.out.print("Enter imginary part: ");
        img=s.nextInt(100);
        return this;
        
    }
    public void showComplex()
    {
        System.out.print(real+"+"+img+"i\n");
        
    }
}

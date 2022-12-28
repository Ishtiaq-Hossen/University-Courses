
package executionsteps;
public class ExecutionSteps {

    public static void main(String[] args) {

        //==== java all data type with initialization======/
        
        boolean b;
        char c;
        short s;
        int i;
        float f;
        double d;
        b=true;
        
        i=10;
        c='a';
        b=true;
        f=10.2f;
        d=10.256;
        System.out.println("i = "+i);
        System.out.println("c = "+c);
        System.out.println("b = "+b);
        System.out.println("f = "+f);
        System.out.println("d = "+d+f );
        System.out.println("==============");
        
        System.out.printf("i = %d\n",i);
        System.out.printf("c = %c\n",c);
        System.out.printf("b = %b\n",b);
        System.out.printf("f = %.1f\n",f);
        System.out.printf("d = %.2f\n",d );
    }
    
}

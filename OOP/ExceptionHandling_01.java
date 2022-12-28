/*
    Problem will show How Arithmetic exception happened
    5/6 its valid
    5.2/6 ->there pogram will give an exception message
    because here I declare num1 & num2 with integer data type
    
*/


package mainpkg;

import java.util.Scanner;

public class main {
    /*
    public static void main(String[] args) {
        
        try
        {
            int x=10;
            int y=0;
            int result=x/y;
            System.out.println("result: "+result);
        }
        
        catch(ArithmeticException ae)//vul exception dile kaj korbena 
        {
            System.out.println("Excetion: "+ae);
        }
        catch(Exception e)//subclass will be always be in low evel 
        {
            System.out.println("Excetion: "+e);
        }
        finally
        {
            System.out.println("Last Line of the program "); 
        }
        
    }
    */
    
    // A probelm about file exception
    public static void main(String[] args) {
        
        try{
            Scanner input =new Scanner(System.in);
            System.out.println("Please enter no 1: ");
            int num1=input.nextInt();
            System.out.println("Please enter no 2: ");
            int num2=input.nextInt();
            int result=num1/num2;
            System.out.println("Result: "+num1+"/"+num2+" = "+result);
        }
        catch(Exception e)
        {
            System.out.println("Exception "+e);
            System.out.println("You must enter an integer,please try again");
            
        }
       
    }
    
}

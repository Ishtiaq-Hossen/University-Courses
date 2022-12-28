
package beginnerjava;
import java.util.Scanner;

public class inputDemo {
    public static void main(String[] args) {

        //======Java taking input from compiler===/
        /*
        Scanner input=new Scanner(System.in);
        int number;
        System.out.print("Enter any number: ");
        number=input.nextInt();
        System.out.println("Number = "+number);
        input.nextLine();
        //Scanner input=new Scanner(System.in);
        String name;
        System.out.print("Enter your name: ");
        name =input.nextLine();
        
        System.out.println("Welcome: "+name);
        
        double num1;
        num1=input.nextDouble();
        System.out.println("Here is the double value: "+num1);
        */
        
        //===character input [contant check,switch statement]======/
        Scanner input=new Scanner(System.in);
        char ch;
        ch=input.next().charAt(0);
        /*
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')System.out.print("Vowel\n");
        else System.out.print("Consonant\n");
        */
        
        /*
        switch(ch)
        {
            case 'a':
                System.out.println("Vowel\n");
                break;
            case 'e':
                System.out.println("Vowel\n");
                break;
            case 'i':
                System.out.println("Vowel\n");
                break;
            case 'o':
                System.out.println("Vowel\n");
                break;
            case 'u':
                System.out.println("Vowel\n");
                break;
            default:
                System.out.println("Consonant");
        }
        */
        
        int[] number;
        number=new int[10];
        int[] a=new int[15];
        
        
    }
      
    
    
      
}

 
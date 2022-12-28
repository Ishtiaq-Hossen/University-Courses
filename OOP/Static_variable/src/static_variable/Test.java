/*
==>This pogram will take 3 student name and their id show their information
==> In this pogram university name is a static field 
if we look at Static_variable.java file there at displayInformation() method 
we will find that university is showing Italic->That means static 
 */
package static_variable;
import java.util.Scanner;


public class Test {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String studName;
        int studId;
        for(int i=0;i<3;i++)
        {
            System.out.println("Input "+(i+1)+"Student Name & ID\n");
            studName=sc.nextLine();//---taking string input
            studId=sc.nextInt();//----taking integer input
            Static_variable student=new Static_variable(studName,studId);            
            student.displayInformation();
            sc.nextLine();
        }
    
        
    }
}

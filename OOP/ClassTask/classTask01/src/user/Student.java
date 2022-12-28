package users;

import java.util.Scanner;

public class Student {
//class Student {
    private int id;
    private String name;
    String[] grades, courseIds;
    int[] credits;
    int temp;
    char ch;
    float[] grade;


    public void setStudentInfo(){
        //ib this method we will set data 
        Scanner s=new Scanner(System.in);
        System.out.print("Enter ID: ");id=s.nextInt();
        s.nextLine();
        System.out.print("Enter Name: ");name=s.nextLine();        
        System.out.print("How many courses completed: ");temp=s.nextInt();
        grades=new String[temp];
        courseIds=new String[temp];
        credits=new int[temp];
        grade=new float[temp];
        for (int i = 0; i < temp; i++) {
            s.nextLine();
            System.out.print("Enter "+i+"-th course ID: ");
            courseIds[i]=s.nextLine();
            //s.nextLine();
            System.out.print("Enter "+i+"-th grade: ");
            grades[i]=s.nextLine();
            System.out.print("Enter "+i+"-th credit: ");
            credits[i]=s.nextInt();
            switch(grades[i])
            {
                case "A":
                    grade[i]=(float) (4.0*credits[i]);
                    break;
                case "A-":
                    grade[i]=(float)(3.7*credits[i]);
                    break;
                case "B+":
                    grade[i]=(float)(3.3*credits[i]);
                    break;
                case "B":
                    grade[i]=(float)(3.0*credits[i]);
                    break;
                case "B-":
                    grade[i]=(float)(2.7*credits[i]);
                    break;
                case "C+":
                    grade[i]=(float)(2.3*credits[i]);
                    break;
                case "C":
                    grade[i]=(float)(2.0*credits[i]);
                    break;
                case "C-":
                    grade[i]=(float)(1.7*credits[i]);
                    break;
                case "D+":
                    grade[i]=(float)(1.3*credits[i]);
                    break;
                case "D":
                    grade[i]=(float)(1.0*credits[i]);
                    break;
                default:
                    grade[i]=(float)(0.0*credits[i]);
                    break;
            }
            
        }
    }
    
    public void showGradePoints(){
        //here we will show the data
        System.out.println("Student Name: "+name);
        for (int i = 0; i < temp; i++) {
            
            System.out.println(courseIds[i]+", "+credits[i]+" credits, grade point: "+grade[i]);
        }
    }  
}

package mainpkg;

import users.Student;




public class MainClass {
    public static void main(String[] args) {
        
        Student asif= new Student();
        asif.setStudentInfo();
        asif.showGradePoints();
        
        /*
        Student[] data=new Student[2];
        for (int i = 0; i < data.length; i++) 
        {
            data[i]=new Student();
            System.out.print("======================\n");
            data[i].setStudentInfo();    
            System.out.print("======================\n");
        }
        for (int i = 0; i < data.length; i++) 
        {
            System.out.print("======================\n");
            data[i].showGradePoints();
            System.out.print("======================\n");
        }
        */
    }
}
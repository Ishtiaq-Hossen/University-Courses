package mainpkg;

import java.time.LocalDate;

public class Student extends Person{
    private int id;
    private float cgpa;
    private String dept;
    
    public Student(){
        System.out.println();
    
    }
    
    public Student(int id1, float cgpa, String dept) {
        id = id1;
        this.cgpa = cgpa;
        this.dept = dept;
    }

    public Student(int id, float cgpa, String dept, String name, String gender, LocalDate dob) {
        super(name, gender, dob);
        //this.name=name;
        this.id = id;
        this.cgpa = cgpa;
        this.dept = dept;
    }

    public Student(int id)
    {
        this.id=id;
    }
    

    public void setId(int id) {
        this.id = id;
    }

    public float getCgpa() {
        return cgpa;
    }

    public void setCgpa(float cgpa) {
        this.cgpa = cgpa;
    }

    public String getDept() {
        return dept;
    }

    public void setDept(String dept) {
        this.dept = dept;
    }
    
    @Override
    public int getId() {
        return id;
    }
    

    @Override
    public String toString() {
        
        //return "Student{super.toString() + " + " id=" + id + ", cgpa=" + cgpa + ", dept=" + dept + '}';
        
        return "Student:\n" + "name=" + name 
                + ", gender=" + gender + ", dob=" 
                + dob + " id=" + id + ", cgpa=" 
                + cgpa + ", dept=" + dept + "|||||";
    }
    
    
    @Override
    public String applyForResearchFund(ResearchApplication ra){
        
        return "Student Name: "+name+"\n"+
                "Student ID: "+id+"\n"+
                "Student CGPA: "+cgpa+"\n"+
                "Student Research Title: "+ra.getResearchTitle();
        //you need to write your own code
        //to pop up an Student specific Alert showing
        //student id, cgpa & research title
    }
    
}

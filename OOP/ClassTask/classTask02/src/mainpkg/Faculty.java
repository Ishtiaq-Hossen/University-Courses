package mainpkg;

import java.time.LocalDate;

public class Faculty extends Person{
    private int id;
    private float salary;
    private String dept, desig;
    
    public Faculty(){}
    public Faculty(int id1, float salary, String dept,String name, String desig , String gender, LocalDate dob) {
        super(name, gender, dob);
        //this.name=name;
        id = id1;
        this.salary = salary;
        this.dept = dept;
        this.desig = desig;
    }
    public Faculty(int id)
    {
        this.id=id;
    }
    

    public void setId(int id) {
        this.id = id;
    }

    public String getDept() {
        return dept;
    }

    public void setDept(String dept) {
        this.dept = dept;
    }

    public float getSalary() {
        return salary;
    }

    public void setSalary(float salary) {
        this.salary = salary;
    }

    public String getDesig() {
        return desig;
    }

    public void setDesig(String desig) {
        this.desig = desig;
    }

    
    @Override
    public int getId() {
        return id;
    }
    
    @Override
    public String toString() {
        
        //return "Student{super.toString() + " + " id=" + id + ", cgpa=" + cgpa + ", dept=" + dept + '}';
        
        return "Faculty:\n" +"id=" + id + "name=" + name 
                + ", gender=" + gender + ", dob=" + dob 
                +  ", salary=" + salary + ", dept=" + dept 
                + ", designation=" + desig +"  ||||  ";
    }  
    @Override
    public String applyForResearchFund(ResearchApplication ra){
        
        return  "Faculty ID: "+id+"\n"+
                "Faculty Designation: "+getDesig()+"\n"+
                "Faculty Research Title: "+ra.getResearchTitle();
        //you need to write your own code
        //to pop up an Faculty specific Alert showing
        //faculty id, designation & research title
    }   
}

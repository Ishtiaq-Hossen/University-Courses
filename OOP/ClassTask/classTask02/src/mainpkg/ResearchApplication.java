package mainpkg;

import java.time.LocalDate;

public class ResearchApplication{
    private String research_Title;
    private String timeduration;
    private float amountOfProject;
    private LocalDate start;
    private Person someone;
   
    
    //6 private fields
    public ResearchApplication(String a,float b,LocalDate c,Person d,String e)
    {
        this.research_Title=a;
        this.amountOfProject=b;
        this.start=c;
        this.someone=d;
        this.timeduration=e;
    }
    public String getResearchTitle() {
        return research_Title;
    }

    public void setResearchTitle(String researchTitle) {
        this.research_Title = researchTitle;
    }

    public float getAmountOfProject() {
        return amountOfProject;
    }

    public void setAmountOfProject(float amountOfProject) {
        this.amountOfProject = amountOfProject;
    }

    public LocalDate getStart() {
        return start;
    }

    public void setStart(LocalDate start) {
        this.start = start;
    }
    
    public void setPerson(Person a)
    {
        this.someone=a;
    }
    public Person getPerson()
    {
        return someone;
    }
    @Override
    public String toString()
    {
        
        return someone.toString()+"Amount of Project: "+amountOfProject
                +" ,Research Start Date: "+start
                +" ,Duration Time: "+timeduration+"\n";
    }
    
}

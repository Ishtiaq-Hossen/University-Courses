
package samplemidsolve1;

import java.util.ArrayList;
import java.util.Random;

public class ComplexList {
    
    ArrayList<Complex>cList=new ArrayList<Complex>();

    public ComplexList()
    {
        
    }
    public ComplexList(ArrayList<Complex> cList) {
        this.cList = cList;
    }

    public ArrayList<Complex> getcList() {
        return cList;
    }

    public void setcList(ArrayList<Complex> cList) {
        this.cList = cList;
    }
    public void polulate()
    {
        
    }
    public void show()
    {
        
    }
    public void augment(Complex[] a)
    {
        Random r=new Random();
        for(int i=0;i<a.length;i++)
        {
            a[i]=new Complex(r.nextInt(100),r.nextInt(100));
            cList.add(a[i]);
        }
        
    }
    public void add(Complex a)
    {
        cList.add(a);
    }
    public void display(int a,int b)
    {
        for(int i=0;i<cList.size();i++)
        {
            if((cList.get(i).real<=a)&&(cList.get(i).img>=b))
            {
                cList.get(i).showComplex();
            }
        }
    }
    
    
    
}

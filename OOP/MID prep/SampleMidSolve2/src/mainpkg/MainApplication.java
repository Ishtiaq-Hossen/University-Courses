
package mainpkg;

import java.util.Random;
import java.util.Scanner;

class MyArray
{
    Random r=new Random();
    int[] intData;
    public MyArray()
    {
        
    }
    /*
        it will take intData size 
    */
    public MyArray(int n)
    {
        intData=new int[n];
        for(int i=0;i<n;i++)
        {
            intData[i]=r.nextInt(15)+10;
        }
    }
}
class Matrix
{
    Scanner s=new Scanner(System.in);
    MyArray[][] oneDobjects;
    public void show()
    {
        System.out.println("Hello");
    }
    public void populateAndAugment()
    {
        Random r=new Random();
        if(oneDobjects==null)//1st if else
        {
            System.out.println("Enter Rows: ");
            int row=s.nextInt();
            System.out.println("Enter Column: ");
            int col=s.nextInt();
            oneDobjects=new MyArray[row][col];

            for(int i=0;i<oneDobjects.length;i++)
            {
                for(int j=0;j<oneDobjects[i].length;j++)
                {
                                        
                    System.out.print("Enter "+i+" "+j+" MyArray "+"intData Size: \n");
                    oneDobjects[i][j]=new MyArray(s.nextInt());
                }
                    
            } 
        }
        else{// 1st if else
            
            System.out.println("How many rows will add: ");
            int row=s.nextInt();
            System.out.println("How many column will add: ");
            int col=s.nextInt();
            if(row==0 && col==0){//nested if else
                return;
            }
            else{//nested if else 1
                MyArray[][] temp=new MyArray[oneDobjects.length+row][oneDobjects[0].length+col];
                
                for(int i=0;i<temp.length;i++)
                {
                    for(int j=0;j<temp[i].length;j++)
                    {
                        temp[i][j]=null;
                    }
                } 
                
                for(int i=0;i<oneDobjects.length;i++)
                {
                    for(int j=0;j<oneDobjects[i].length;j++)
                    {
                        temp[i][j]=oneDobjects[i][j];
                    }
                } 
                
                System.out.print("Want to add values on previous Matrix 1 for yes/0 for no: ");
                int k=s.nextInt();
                if(row==0&&k==0)//nested if else 2
                {
                    System.out.println("Only one row\n");
                    oneDobjects=temp;
                    return;
                }
                else if(k==1)//nested if else 2
                {
                   
                   for(int i=0;i<temp.length;i++)
                   {
                        for(int j=0;j<temp[i].length;j++)
                        {
                            if(temp[i][j]==null)
                            {
                                System.out.print("Enter "+i+" "+j+" MyArray "+"intData Size: \n");
                                temp[i][j]=new MyArray(s.nextInt());
                                
                            }
                            
                        }
                   }
                   
                }
                else{ //nested if else 2
                    
                   
                    for(int i=oneDobjects.length;i<temp.length;i++)
                    {
                        for(int j=0;j<temp[i].length;j++)
                        {
                            
                            
                                System.out.print("Enter "+i+" "+j+" MyArray "+"intData Size: \n");
                                temp[i][j]=new MyArray(s.nextInt());
                                
                        }
                    }
                    
                    
                }
                oneDobjects=temp;
                
            }   
        
        }
    }
    public void display()
    {
        for(int i=0;i<oneDobjects.length;i++)
        {
             
            for(int j=0;j<oneDobjects[i].length;j++)
            {   
                if(oneDobjects[i][j]==null)continue;
                else{
                    for(int k=0;k<oneDobjects[i][j].intData.length;k++)
                    {
                    
                        if(k<oneDobjects[i][j].intData.length-1)
                        System.out.print(oneDobjects[i][j].intData[k]+" ");
                        else{
                        System.out.print(oneDobjects[i][j].intData[k]+"     ");  
                        }
                    
                    
                    }
                }
                
                    
            }
            System.out.println("");
                    
        }
    }
}
public class MainApplication {

    
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s=new Scanner(System.in); 
        Matrix m=new Matrix();
        m.oneDobjects=null;
        while(true)
        {
            int a=s.nextInt();
            if(a==2)break;
            else{
                m.populateAndAugment();
                /*pupulateAndAugment method will ask row and col value
                if matrix isn't null it will ask 
                if user want to add any row and col 
                if user give row and col value 
                then it will ask ->
                if user want to add value 
                any previous matrix unfilled row & col 
                if user want to fill unfilled row & col he will select 1
                if user want to fill new matrix unfilled row & col he will select 2
           
                */
            }
            m.display();
            
        }       
    
    }
    
}


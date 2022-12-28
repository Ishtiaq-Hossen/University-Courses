
package myArray;

import java.util.Random;
import java.util.Scanner;

public class Matrix {
    private OneDArray[][] arrays;
    public Matrix()
    {
        
    }
    public Matrix(int a,int b,int c,int d)
    {
        Random r=new Random();
        float k;
        OneDArray[][] temp=new OneDArray[a][b];
        for(int i=0;i<temp.length;i++)
        {
            for(int j=0;j<temp[i].length;j++)
            {
                int[] tempArray=new int[c];
                k=0;
                for(int l=0;l<c;l++)
                {
                    tempArray[l]=r.nextInt(d);
                    k+=tempArray[l];
                }
                
                k=k/c;  
                c++;
                temp[i][j]=new OneDArray();
                temp[i][j].setValues(tempArray);
                temp[i][j].setAverage(k);
            }
            
            
        }
        setArrays(temp);
    }
    public Matrix(int a,int b)
    {
        Scanner s=new Scanner(System.in);
        Random r=new Random();
        OneDArray[][] temp=new OneDArray[a][b];
        float k;
        for(int i=0;i<temp.length;i++)
        {
            for(int j=0;j<temp[i].length;j++)
            {
                System.out.println("Enter [ "+i+" "+j+ "] Array size: ");
                int[] tempArray=new int[s.nextInt()];
                k=0;
                for(int l=0;l<tempArray.length;l++)
                {
                    tempArray[l]=r.nextInt(10)+10;
                    k+=tempArray[l];
                }
                k=k/(tempArray.length);
                temp[i][j]=new OneDArray();
                temp[i][j].setValues(tempArray);
                temp[i][j].setAverage(k);
            }
        }
        setArrays(temp);
    }
    public OneDArray[][] getArrays() {
        return arrays;
    }

    public void setArrays(OneDArray[][] arrays) {
        this.arrays = arrays;
    }
    public void showMatrix()
    {
        for(int i=0;i<arrays.length;i++)
        {
            for(int j=0;j<arrays[i].length;j++)
            {
                System.out.print("{");
                for(int l=0;l<arrays[i][j].getValues().length;l++)
                {
                    if(l==arrays[i][j].getValues().length-1)System.out.print(arrays[i][j].getValues()[l]+"}Avg:"+arrays[i][j].getAverage()+"   ");
                    else 
                    {
                        System.out.print(arrays[i][j].getValues()[l]+" ");
                    }
                }
            }
            System.out.println("");
        }
    }
    
    public Matrix merge(Matrix a)
    {
        Matrix k=new Matrix();
        float avg;
        k.arrays=new OneDArray[this.arrays.length][this.arrays[0].length];
        for(int l=0;l<k.arrays.length;l++)
        {
            for(int m=0;m<k.arrays[l].length;m++)
            {
                avg=0f;
                k.arrays[l][m]=new OneDArray();
                int[] temp=new int[this.arrays[l][m].getValues().length+a.arrays[l][m].getValues().length];
                for(int i=0;i<this.arrays[l][m].getValues().length;i++)
                {
                    
                    temp[i]=this.arrays[l][m].getValues()[i];
                    avg+=temp[i];
                  
                }
                int temp2=this.arrays[l][m].getValues().length;
                int temp3=0;
                for(int i=this.arrays[l][m].getValues().length;i<temp.length;i++)
                {
                    
                    temp[temp2]=a.arrays[l][m].getValues()[temp3];
                    avg+=temp[temp2];
                    temp2++;
                    temp3++;
                  
                }
                avg=avg/temp.length;
                k.arrays[l][m].setAverage(avg);
                k.arrays[l][m].setValues(temp);
                
                
            }
        }
        
        
        return k;
    }
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package myown;

import java.util.Random;

/**
 *
 * @author Ishti
 */
public class IntArray {
    
    int[] vals;
    
    public IntArray()
    {
        
    }
    public IntArray(int a)
    {
        Random rand = new Random(); 
        vals=new int[a];
        for(int i=0;i<a;i++)
        {
            vals[i]=rand.nextInt(100);
        }
    }
    public void showIntArray()
    {
        for(int i=0;i<vals.length;i++)
        {
            System.out.print(vals[i]+" ");
        }
        System.out.println("");
    }
    public IntArray merge(IntArray a)
    {
        int len=a.vals.length;
        int len2=this.vals.length;
        int[] temp=new int[len+len2];
        int index=0;
        for(int i=0;i<temp.length;i++)
        {
            if(i<len)
            {
                temp[i]=a.vals[i];
            }            
            else
            {
                temp[i]=this.vals[index];
                index++;
            }
        }
        this.vals=temp;
        return this;        
    }
    public static IntArray merge(IntArray a,IntArray b)
    {
        
        int index=0;
        IntArray temp=new IntArray(a.vals.length+b.vals.length);
        for(int i=0;i<temp.vals.length;i++)
        {
            if(i<a.vals.length)
            {
                temp.vals[i]=a.vals[i];
            }
            else
            {
                temp.vals[i]=b.vals[index];
                index++;
            }
        }
        return temp;
    }
}

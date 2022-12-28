/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package myown;

/**
 *
 * @author Ishti
 */
public class Myown {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        IntArray a=new IntArray(5);
        IntArray b=new IntArray(2);
        a.merge(b).showIntArray();
        IntArray l=IntArray.merge(a,new IntArray(2));
        
        l.showIntArray(); 
    }
    
}

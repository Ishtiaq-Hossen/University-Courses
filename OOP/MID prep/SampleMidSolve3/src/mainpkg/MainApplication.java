/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainpkg;

import java.util.Scanner;
import myArray.Matrix;
import myArray.OneDArray;

public class MainApplication {

    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Matrix m1,m2,m3;
        System.out.print("Enter row & column: ");
        int r=s.nextInt();
        int c=s.nextInt();
        
        m1=new Matrix(r,c);
        System.out.print("First Matrix: \n");
        m1.showMatrix();
        m2=new Matrix(r,c,2,10);
        System.out.print("Second Matrix: \n");
        m2.showMatrix();
        m3=new Matrix();
        m3=m1.merge(m2);
        System.out.print("Merged Matrix: \n");
        m3.showMatrix();
    }
    
}

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Calculator;

public class Calculator {
    //private float a;
    private long b,a;

    public Calculator(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public Calculator()
    {
        
    };
    //public static int ans=0;

    public long getB() {
        return b;
    }

    public void setB(long b) {
        this.b = b;
    }

    public long getA() {
        return a;
    }

    public void setA(long a) {
        this.a = a;
    }
    public long add()
    {
        long temp;
        temp=a+b;
        
        return temp;
    }
    public long minus()
    {
        long temp;
        temp=a-b;
        
        return temp;
    }
    public double divide()
    {
        double temp;
        temp=a/(double)b;
        
        return temp;
    }
    public long multiplication()
    {
        long temp;
        temp=a*b;
        
        return temp;
    }
    
}

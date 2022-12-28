/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainpkg;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.stage.FileChooser;

/**
 *
 * @author Ishti
 */
public class MainApplication {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner s=new Scanner(System.in);
        //======file initialize=======/
        File f = null;
        FileWriter fw = null;
        FileChooser fc = null;
        //==========file writting (.txt file)=========/
        try {
            

            f = new File("test.txt");  
            if(f.exists()) fw = new FileWriter(f,true);
            else fw = new FileWriter(f);
            int x=s.nextInt();
            s.nextLine();
            String name=s.nextLine();
            fw.write(
            	x+","+name+"\n"	
            );           
            
        } 
        catch (IOException ex) {
            
        } 
        finally {
            try {//nested try-catch
                
                if(fw != null) fw.close();
                
            } 
            catch (IOException ex) {
               
            }
        }
        
        //==========file reading (.txt file)=========/
        Scanner sc; String str; String[] tokens;
        try {
            f = new File("test.txt");
            sc = new Scanner(f);
            if(f.exists()){
                
                while(sc.hasNextLine()){
                    str=sc.nextLine();
                    tokens = str.split(",");
                    System.out.print(
                            "Id="+tokens[0]
                            +", Name="+tokens[1]
                            +"\n"                    
                    );
                }
            }
            else 
                System.out.println("oops! Emp.txt does not exist...");
        } 
        catch (IOException ex) {
            
        } 
        finally {
        }        
    
    }
    
}

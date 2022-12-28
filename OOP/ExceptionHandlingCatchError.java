/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Ishti
 */
public class mainpkg {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        try{
            int x=0;
            int y=5/x;
        }
        catch(Exception e)
        {
            System.out.println("Exception!");
        }
        /*
        error reason==>
        here at next catch an error is showing 
        beacuse ..
        [bangla]
        choto exception ba tole niche pore gese 
        boro exception ba tole upore ache 
        jar fole sob exception e boro thole te pore jacce 
        choto tole jekhane ta dhote felte parto 
        
        
        solution==>
        
        catch (ArithmeticException ae){..}
        catch(Exception e){..}
        
        */
        
        catch (ArithmeticException ae)
        {
            System.out.println("Arithmetic Exception!");
        }
        
        System.out.println("Finished");
        
        
    }
    
}

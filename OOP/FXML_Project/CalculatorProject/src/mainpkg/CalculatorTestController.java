/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainpkg;

import Calculator.Calculator;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;

/**
 * FXML Controller class
 *
 * @author Ishti
 */

public class CalculatorTestController implements Initializable {
    String op="";
    Calculator a=new Calculator();
    long temp1=0,temp2=0,temp3=0,temp4=0,temp5=0;
    boolean m=true;
    public void process()
    {
        long a=temp5;
        if(m==true){
            temp1=(long) (temp5+(temp1 * 10));
            temp2++;
            showOutput.setText("  "+temp1+"");
        
        }
        else{
            if(op=="+")
            {
                temp3=(long) (temp5+(temp3*10));
                temp4++;
                
                showOutput.setText("  "+temp1+"+"+temp3);
                

            }
            else if(op=="-")
            {
                temp3=(long) (temp5+(temp3*10));
                temp4++;
                
                showOutput.setText("  "+temp1+"-"+temp3);
            }
            else if(op=="÷")
            {
                temp3=(long) (temp5+(temp3*10));
                temp4++;
                
                showOutput.setText("  "+temp1+"÷"+temp3);
            }
            else if(op=="*")
            {
                temp3=(long) (temp5+(temp3*10));
                temp4++;
                
                showOutput.setText("  "+temp1+"x"+temp3);
            }
        
        }
    }
    
    @FXML private Label showOutput;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    
    //click ctrl
    @FXML
    private void nine(ActionEvent event) {
        //temp1=9;
        temp5=9;
        process();
 
        
    }

    @FXML
    private void six(ActionEvent event) {
        temp5=6;
        process();
    }

    @FXML
    private void eight(ActionEvent event) {
        temp5=8;
        process();
    }

    @FXML
    private void seven(ActionEvent event) {
        temp5=7;
        process();
    }

    

    @FXML
    private void five(ActionEvent event) {
        temp5=5;
        process();
    }

    @FXML
    private void four(ActionEvent event) {
        temp5=4;
        process();
    }  

    @FXML
    private void one(ActionEvent event) {
        temp5=1;
        process();
    }

    @FXML
    private void two(ActionEvent event) {
        temp5=2;
        process();
    }

    @FXML
    private void three(ActionEvent event) {
        temp5=3;
        process();
    }   
    @FXML
    private void zero(ActionEvent event) {
        temp5=0;
        process();
    }
    
    
    
    
    
    @FXML
    private void equal(ActionEvent event) {
                   
             a.setA(temp1);
             a.setB(temp3);
             temp1=0;
             temp2=0;
             temp3=0;
             temp4=0;
             m=true;
             if(op=="+")
             showOutput.setText("  Answer is: "+a.add());
             else if(op=="-")showOutput.setText("  Answer is: "+a.minus());
             else if(op=="÷")
             {
                 
                 showOutput.setText("  Answer is: "+String.format("%.6f",a.divide()));
             }
             else showOutput.setText("  Answer is: "+a.multiplication());
    }
        

    
        
        
        
    @FXML
    private void minus(ActionEvent event) {
        m=false;
        op="-";
        showOutput.setText("  "+temp1+op);
    }

    @FXML
    private void plus(ActionEvent event) {
        m=false;
        op="+";        
        showOutput.setText("  "+temp1+op);   
    }
    @FXML
    private void divide(ActionEvent event) {
        m=false;
        op="÷";
        showOutput.setText("  "+temp1+op);
    }
    @FXML
    private void multiplication(ActionEvent event) {
        m=false;
        op="*";
        showOutput.setText("  "+temp1+"x");
    }

    @FXML
    private void clear(ActionEvent event) {
        m=true;
        temp1=0;
        temp2=0;
        temp3=0;
        temp4=0;
        showOutput.setText("");
        
    }
    

}

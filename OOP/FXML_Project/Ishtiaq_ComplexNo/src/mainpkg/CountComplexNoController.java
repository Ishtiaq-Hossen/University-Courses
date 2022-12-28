/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainpkg;

import java.net.URL;
import java.util.Random;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

/**
 * FXML Controller class
 *
 * @author Ishti
 */
public class CountComplexNoController implements Initializable {

    @FXML
    private TextField firstRealNumber;
    @FXML
    private TextField firstImagNumber;
    @FXML
    private TextField secondRealNumber;
    @FXML
    private TextField secondImagNumber;
    @FXML
    private ComboBox<String> countComboBox;
    @FXML
    private Label showAllComplexNoLabel;
    @FXML
    private Label showSumofAllComplexNoLabel;

    ComplexNo[] complexArr;
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
        countComboBox.getItems().addAll("1","2","3","4","5");
    }    

    @FXML
    private void showAllComplexNo(ActionEvent event) {
        Random r=new Random();
        String op="\t\t\t\t\t\t\t\tAll ComplexNo:\n";
        int len=Integer.parseInt(countComboBox.getValue().toString());
        complexArr = new ComplexNo[len+2];
        complexArr[0]=new ComplexNo(
                Integer.parseInt(firstRealNumber.getText()),
                Integer.parseInt(firstImagNumber.getText())
        );
        complexArr[1]=new ComplexNo(
                Integer.parseInt(secondRealNumber.getText()),
                Integer.parseInt(secondImagNumber.getText())
               
        );
        op+="\t\t\t\t\t\t\t\tUser defined: "+complexArr[0].getString()+"\n"+
           "\t\t\t\t\t\t\t\tUser defined: "+complexArr[1].getString()+"\n";
        for(int i=2;i<complexArr.length;i++)
        {           
            complexArr[i]=new ComplexNo(
                r.nextInt(100),r.nextInt(100)
            );
            op+="\t\t\t\t\t\t\t\tRandom generated: "+complexArr[i].getString()+"\n";
        }
        showAllComplexNoLabel.setText(op);
        
        
    }

    @FXML
    private void sumOfComplexNo(ActionEvent event) {
        ComplexNo temp=ComplexNo.add(complexArr);
        //temp.add(complexArr);
        showSumofAllComplexNoLabel.setText(
                "\tSum of ALL Complex Number is: "+
                 temp.getString()
        );
    }

    @FXML
    private void reset(ActionEvent event) {
        showAllComplexNoLabel.setText("");
        showSumofAllComplexNoLabel.setText("");
        firstRealNumber.setText("");
        firstImagNumber.setText("");
        secondRealNumber.setText("");
        secondImagNumber.setText("");
        countComboBox.setValue(null);   
    }
    
    
}

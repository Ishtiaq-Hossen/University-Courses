/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainpkg;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import users.Student;

/**
 * FXML Controller class
 *
 * @author Ishti
 */
public class TestStaticFieldAndMethodSceneController implements Initializable {

    @FXML private TextField idTextField;
    @FXML private TextField nameTextField;
    @FXML private TextField cgpaTextField;
    @FXML private TextField uniNameTextField;
    @FXML private Label outputLabel;
    private Student s;
    
    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void createNewStudentButtonOnClick(ActionEvent event) {
        s=new Student(
                Integer.parseInt(idTextField.getText()),
                nameTextField.getText(),
                Float.parseFloat(cgpaTextField.getText())
                
        );
    }

    @FXML
    private void ShowAllFieldButtonOnClick(ActionEvent event) {
        outputLabel.setText("");
        outputLabel.setText(
                "\t\tId: "+s.getId()+
                "\n\t\tName: "+s.getName()+
                "\n\t\tCGPA: "+s.getCgpa()+
                "\n\t\tUniversity: "+Student.getUniName()
        );
    }

    @FXML
    private void updateUniNameButtonOnClick(ActionEvent event) {
        Student.setUniName(uniNameTextField.getText());
        outputLabel.setText("");
        outputLabel.setText(
                "\t\tId: "+s.getId()+
                "\n\t\tName: "+s.getName()+
                "\n\t\tCGPA: "+s.getCgpa()+
                "\n\t\tUniversity: "+Student.getUniName()
        );
    }
    
}

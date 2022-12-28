/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainpkg;

import java.net.URL;
import java.time.LocalDate;
import java.time.Month;
import java.util.ArrayList;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.ComboBox;
import javafx.scene.control.DatePicker;
import javafx.scene.control.RadioButton;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.control.ToggleGroup;

/**
 * FXML Controller class
 *
 * @author User
 */
public class InheritanceTestSceneController implements Initializable {
    @FXML    private TextField nameTextField;
    @FXML    private DatePicker dobDatePicker;
    @FXML    private TextArea outputTextArea;
    @FXML    private TextField cgpaTextField;
    @FXML    private ComboBox<String> deptComboBox;
    @FXML    private TextField salaryTextField;
    @FXML    private RadioButton maleRadioButton;
    @FXML    private RadioButton femaleRadioButton;
    @FXML    private ComboBox<String> desigComboBox;
    @FXML    private TextField idTextField;
    private ArrayList<Person> pList;
    private ToggleGroup tg;

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        pList = new ArrayList<Person>();

        tg = new ToggleGroup();
        maleRadioButton.setToggleGroup(tg);
        femaleRadioButton.setToggleGroup(tg);    
        maleRadioButton.setSelected(true);
        deptComboBox.getItems().addAll(
            "CSE", "EEE", "PS", "ENV", "ECN"    
        );
        desigComboBox.getItems().addAll(
            "Lecturer", "Asst. Prof.", "Assoc. Prof.", "Prof."
        );    
        /*
        Person p1, p2, p3;
        p1=new Person();
        p2=new Student();
        p3=new Faculty();
        */
    }    


    @FXML
    private void addNewStudentButtonOnClick(ActionEvent event) {
        pList.add(
            new Student(
                Integer.parseInt(idTextField.getText()),
                Float.parseFloat(cgpaTextField.getText()),
                deptComboBox.getValue().toString(),
                nameTextField.getText(),
                (maleRadioButton.isSelected()?"Male":"Female"), 
                dobDatePicker.getValue()
            )
        );
        
    }

    @FXML
    private void showAllInstanceButtonOnClick(ActionEvent event) {
        for(Person p: pList)
            outputTextArea.appendText(
                p.toString()
            );
    }

    @FXML
    private void addNewFacultyButtonOnClick(ActionEvent event) {
        pList.add(
            new Faculty(
                Integer.parseInt(idTextField.getText()),
                Float.parseFloat(salaryTextField.getText()),
                deptComboBox.getValue().toString(),
                desigComboBox.getValue().toString(),
                nameTextField.getText(),
                (maleRadioButton.isSelected()?"Male":"Female"), 
                dobDatePicker.getValue()
            )
        );
    }

    
}

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
import java.util.Random;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Alert;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Control;
import javafx.scene.control.DatePicker;
import javafx.scene.control.Label;
import javafx.scene.control.RadioButton;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.input.KeyEvent;

/**
 * FXML Controller class
 *
 *  User
 */
public class ResearchFundApplicationSceneController implements Initializable {

    
    //      All fxid are here
    
    @FXML    private RadioButton studentRadioButton;
    @FXML    private RadioButton FacultyRadioButton;
    @FXML    private DatePicker startDatePicker;
    @FXML    private ComboBox<String> durationComboBox;
    @FXML    private TextField researchFund;
    @FXML    private TextField researchTittle;
    @FXML    private TextArea viewAll;
    @FXML    private TextField applicantIdTextField;
    @FXML    private Label validate;
    @FXML    private Label validate1;
    @FXML    private TextArea viewtempinfo;
    
    //   All fields are here
    private ArrayList<ResearchApplication> reAppList;
    private ArrayList<Person> fakePersonListToSumilateDatabase;
    String check,check1;
    
    
    
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
        durationComboBox.getItems().addAll("1 month","2 month","3 month","4 month","5 month","! year","2 year");
        reAppList = new ArrayList<ResearchApplication>();
        fakePersonListToSumilateDatabase = new ArrayList<Person>();
        
        
        
        //Fake Database :->
        fakePersonListToSumilateDatabase.add(new Student(105,2.5f,"CSE","Ishtiaq Hossen","Male",LocalDate.of(1998,Month.AUGUST,12)));
        fakePersonListToSumilateDatabase.add(new Student(107,2.5f,"EEE","Jubair AL Berune","Male",LocalDate.of(1997,Month.SEPTEMBER,15)));
        fakePersonListToSumilateDatabase.add(new Student(110,3.7f,"BBA","Jannat Ara Mou","Female",LocalDate.of(1999,Month.OCTOBER,10)));
        fakePersonListToSumilateDatabase.add(new Student(234,2.8f,"ANTROPOLOGY","Kashfia","Female",LocalDate.of(2000,Month.JANUARY,15)));
        fakePersonListToSumilateDatabase.add(new Student(158,3.9f,"CSE","Shikha Nousaba","Female",LocalDate.of(2001,Month.SEPTEMBER,7)));
        fakePersonListToSumilateDatabase.add(new Faculty(305,300000.5f,"CSE","Subrata Kumar Dey","Senior Lecturer","Male",LocalDate.of(1975,Month.AUGUST,10)));
        fakePersonListToSumilateDatabase.add(new Faculty(317,150000.7f,"CSE","Ajmiri Sultana","Associate Professor","Female",LocalDate.of(1985,Month.SEPTEMBER,17)));
        fakePersonListToSumilateDatabase.add(new Faculty(377,50000.5f,"CSE","Asif Mahmood","Junior Lecturer","Male",LocalDate.of(1988,Month.AUGUST,22)));
        fakePersonListToSumilateDatabase.add(new Faculty(322,150000.5f,"EEE","Shihav Uddin","Associate Lecturer","Male",LocalDate.of(1992,Month.JANUARY,29)));
        fakePersonListToSumilateDatabase.add(new Faculty(347,150000.5f,"EEE","Farhad Alam","Associate Lecturer","Male",LocalDate.of(1980,Month.FEBRUARY,28)));
        
        
    }    

    @FXML
    private void radioButtonOnClick(ActionEvent event) {
        if(studentRadioButton.isSelected()==true)
        {
            check="Student";
            check1=" ";
        }
        
        if(FacultyRadioButton.isSelected()==true){
            check1="Faculty";
            check=" ";
        }
        
    }

    @FXML
    private void submitProposalButtonOnClick(ActionEvent event) {
        
       
            viewtempinfo.setText("");
            
            boolean verify=false;
            if(validate1.isVisible()==true)
            {
            
                validate1.setVisible(false);
                validate.setVisible(false);

                int temp=Integer.parseInt(applicantIdTextField.getText());
                for(int i=0;i<fakePersonListToSumilateDatabase.size();i++)
                {
                   //verify=false;
                   if(fakePersonListToSumilateDatabase.get(i).getId()==temp)
                   {

                     verify=true;
                     reAppList.add(new ResearchApplication(researchTittle.getText(),Float.parseFloat(researchFund.getText()),startDatePicker.getValue(),fakePersonListToSumilateDatabase.get(i),durationComboBox.getValue().toString()));
                     viewtempinfo.clear();
                     viewtempinfo.setText(fakePersonListToSumilateDatabase.get(i).applyForResearchFund(reAppList.get(reAppList.size()-1)));
                    }
              
              
                }
                if(verify==false)
                {

                       viewtempinfo.clear();
                       viewtempinfo.setText("Unauthorized user");

                }
            }
            applicantIdTextField.setText("");
            researchTittle.setText("");
            researchFund.setText("");
            startDatePicker.setValue(null);
            durationComboBox.getSelectionModel().clearSelection();
       
    }     
        


    @FXML private void viewAllApplicatant(ActionEvent event) {
        viewAll.clear();
        for(ResearchApplication p: reAppList){
            viewAll.appendText(
                p.toString()
            );
            //p.doSome();
        }
    }


    @FXML private void validation(KeyEvent event) {
       
        int len=applicantIdTextField.getText().length();
        String a =applicantIdTextField.getText();
        boolean test=true;
        
        for(int i=0;i<len;i++)
        {            
            int temp=a.charAt(i);
            if(temp<48 || temp>57)
            {
                test=false;
                break;
            }
            
        }
        
        if(len>3 || (len<3 && len>=1)||(test==false))
    
        {
            validate1.setVisible(false);
            validate.setVisible(true);
            
        }
        else if(len==3&&(test==true)) {
            validate1.setVisible(true);
            validate.setVisible(false);
        }
        else if(len==0) {
            
            validate1.setVisible(false);
            validate.setVisible(false);
        }
    }
}

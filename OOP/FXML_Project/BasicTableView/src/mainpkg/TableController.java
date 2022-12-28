/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mainpkg;


import java.net.URL;
import java.util.ResourceBundle;
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;

import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.scene.control.cell.TextFieldTableCell;



/**
 * FXML Controller class
 *
 * @author Ishti
 */
public class TableController implements Initializable {

    @FXML private TableColumn<User, String> name;
    @FXML private TableColumn<User, Integer> age;
    @FXML private TableColumn<User, String> animal;
    @FXML private TableView<User> table;
    
    
    ObservableList<User>list= FXCollections.observableArrayList(
            new User("Daniel",20,"Dog"),
            new User("Anna",21,"Cat"),
            new User("Marc",20,"Bird")
    );
    
    
    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        name.setCellValueFactory(new PropertyValueFactory<User, String>("name"));
        age.setCellValueFactory(new PropertyValueFactory<User,Integer>("age"));
        animal.setCellValueFactory(new PropertyValueFactory<User,String>("animal"));
        table.setItems(list);
        table.setEditable(true);
        name.setCellFactory(TextFieldTableCell.forTableColumn());
        
    }    
    
}

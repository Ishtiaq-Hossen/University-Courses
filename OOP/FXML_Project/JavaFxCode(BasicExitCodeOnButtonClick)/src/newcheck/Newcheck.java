//basic javafx code-> https://pastebin.pl/view/7350169a
package newcheck;

import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

/**
 *
 * @author Ishti
 */
public class Newcheck extends Application {
    
    
    public static void main(String[] args) {
        launch(args);
    }
    @Override
    public void start(Stage primaryStage) throws Exception
    {
        Button button=new Button("Exit");
        button.setOnAction(ae->{
            primaryStage.close();
            System.out.println("Exited!");
        });
        primaryStage.setOnCloseRequest(ae->
        {
            System.out.println("Exited");
        });
        
        StackPane layout=new StackPane();
        layout.getChildren().add(button);
        Scene scene=new Scene(layout,500,500);
        primaryStage.setScene(scene);
        primaryStage.show();
        
    }
    
    
    

        
        
    
    
    
}

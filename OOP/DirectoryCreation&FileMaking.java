package mainpkg;
import java.io.File;
/**   
 * @author Ishti
 */
public class main {

    public static void main(String[] args) {
        //===folder(directory) making and show the directory location 
        //===and also get the directory name====/
        
        /*
        File dir=new File("C:/Users/Ishti/Desktop/OOP own practice/exceptionHandling/person");
        dir.mkdir();//directory will be created 
        String dirlocation=dir.getAbsolutePath();
        System.out.println(dirlocation);
        System.out.println(dir.getName());
        */
        
        /*=====directory making
               ==>take the directory path
               ==>directory deletion(in comment)
               ==>file creation on that directory)
               (.bin+.text file)
        */
        
        File dir=new File("Person");
        dir.mkdir();
        String path=dir.getAbsolutePath();
        //dir.delete()    --> to delete the directory g
        File file1=new File(path+"/student.bin");
        File file2=new File(path+"/teacher.txt");
        
        try
        {
            file1.createNewFile();
            file2.createNewFile();
            System.out.println("Files are created");
        }
        catch(Exception e)
        { 
            System.out.println(e);
        }
        //some method
        // file exists()//bool

        //file.delete()//delete
        
        
        
        
    }
    
}

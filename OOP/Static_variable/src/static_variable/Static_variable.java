/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package static_variable;

/**
 *
 * @author Ishti
 */
public class Static_variable {

    String name;
    int id;
    static String university="IUB";
    Static_variable(String n,int i)
    {
        name=n;
        id=i;
    }
    void displayInformation()
    {
        System.out.println("Name: "+name);
        System.out.println("ID: "+id);
        System.out.println("University: "+university);
        System.out.println("===============");
    }
    
}

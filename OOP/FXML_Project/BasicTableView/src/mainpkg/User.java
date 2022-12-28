
package mainpkg;

/**
 *
 * @author Ishti
 */
public class User {
    private String name;
    private int age;
    private String animal;
    public User(String name,int age,String animal)
    {
        this.name=name;
        this.age=age;
        this.animal=animal;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public String getAnimal() {
        return animal;
    }

    public void setAnimal(String animal) {
        this.animal = animal;
    }
    
}

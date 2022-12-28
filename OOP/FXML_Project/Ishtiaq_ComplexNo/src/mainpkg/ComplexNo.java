package mainpkg;


public class ComplexNo {
    private int real,img; 
    public ComplexNo()
    {
        real=img=0;
    }
    public ComplexNo(int real,int img){
        this.real=real;
        this.img=img;
    }

    public int getReal() {
        return real;
    }

    public void setReal(int real) {
        this.real = real;
    }
    
    public int getImg() {
        return img;
    }

    public void setImg(int img) {
        this.img = img;
    }
    public static ComplexNo add(ComplexNo[] arr){
        ComplexNo temp=new ComplexNo();
        for(int i=0;i<arr.length;i++)
        {
            temp.real+=arr[i].real;
            temp.img+=arr[i].img;
        }
        return temp;
    }
    public String getString()
    {
        return real+(img<0?"":"+")+img+"i";
    }
    
}

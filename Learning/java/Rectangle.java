package snapshot.labtasks01;

/**
 * @author Alamgir Khan
 */
import java.util.*;
public class Rectangle {
    double width,height;
    Rectangle(){
        this.height=1;
        this.width=1;
    }
    Rectangle(double h, double w) {
        this.height=h;
        this.width=w;
    }
    public double getArea(){
        double area=height*width;
        return area;
    }
    public double getParameter(){
        double par=2*(height*width);
        return par;
    }
    
    public static void main(String[] args) {
        Rectangle rec1=new Rectangle(4, 40);
        Rectangle rec2=new Rectangle(3.5, 35.9);
        System.out.println("Rectangle1:\n"+"height:"+rec1.height+
          " width:"+rec1.width+"\narea:"+rec1.getArea()+
                " parameter:"+rec1.getParameter());
        System.out.println("Rectangle2:\n"+"height:"+rec2.height+
          " width:"+rec2.width+"\narea:"+rec2.getArea()+
                " parameter:"+rec2.getParameter());
    }
    
    
}

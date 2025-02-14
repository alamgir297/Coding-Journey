
package snapshot.labtasks01;

/**
 *
 * @author Alamgir Khan
 */
import java.util.*;
public class LabTasks01 {
    
    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);
        int a,b,c;
        while(true){
            System.out.println("Enter the values of a,b,c (ax^2+bx+c)\n");
            a=scn.nextInt();
            b=scn.nextInt();
            c=scn.nextInt();
            double ans=((-1*b)+Math.sqrt((b*b)-4*a*c))/(2*a);
            double ans2=((-1*b)-Math.sqrt((b*b)-4*a*c))/(2*a);
            System.out.println("value of x is:\n"+ ans+ " or \n"+ans2+ "\n");

        }
    }
}

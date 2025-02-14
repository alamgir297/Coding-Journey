package snapshot.labtasks01;

/**
 * @author Alamgir Khan
 */
import java.util.*;
public class Employee {
    String fName, lName;
    double salary;
    Employee(String fn, String ln, double sal) {
        this.fName=fn;
        this.lName=ln;
        this.salary=sal;
    }
    public void SetfName(String s){
        this.fName=s;
    }
    public String GetfName(){
        return fName;
    }
    
    public void SetlName(String s){
        this.lName=s;
    }
    public String GetlName(){
        return lName;
    }
    public void SetSalary(double q){
        this.salary=q;
    }
    public double GetSalary(){
        return salary;
    }
    public double yearlySal(){
        double sal=(double) salary*12.00;
        return sal;
    }
    
    public static void main(String[] args) {
        Scanner scn=new  Scanner(System.in);
        String fName=scn.nextLine(), lName=scn.nextLine();
        double sal=scn.nextDouble();
        Employee emp1= new  Employee(fName, lName, sal);
        Employee emp2=new Employee("abc", "efg", 1000);
        System.out.println(emp1.fName+" yearly sal:"+emp1.yearlySal());
        System.out.println(emp2.fName+" yearly sal:"+emp2.yearlySal());
        double rs1=emp1.salary+emp1.salary*0.1;
        double rs2=emp2.salary+emp2.salary*0.1;
        emp1.SetSalary(rs1);
        emp2.SetSalary(rs2);
        System.out.println("after raise "+ emp1.fName+ " yearly sal:"+emp1.yearlySal());
        System.out.println("after raise "+ emp2.fName+ " yearly sal:"+emp2.yearlySal());
        
        
    }
    
    
}

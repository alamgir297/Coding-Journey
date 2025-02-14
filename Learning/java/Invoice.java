package snapshot.labtasks01;

/**
 * @author Alamgir Khan
 */
import java.util.*;
public class Invoice {
    String partNum, partDesc;
    int quantity;
    double iPrice;

    Invoice(String Number, String Desc, int qnt, double price) {
        this.partNum=Number;
        this.partDesc=Desc;
        this.iPrice=price;
        this.quantity=qnt;
    }
    public void SetPartNum(String s){
        this.partNum=s;
    }
    public String GetPartNum(){
        return partNum;
    }
    
    public void SetPartDesc(String s){
        this.partDesc=s;
    }
    public String GetPartDesc(){
        return partDesc;
    }
    
    public void SetQuantity(int q){
        this.quantity=q;
    }
    public int GetQuantity(){
        return quantity;
    }
    
    public void SetPrice(double q){
        this.iPrice=q;
    }
    public double GetPrice(){
        return iPrice;
    }
    
    public double getInvoiceAmount(){
        double ans=(double)quantity*iPrice;
        return  ans;
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        String partNum=scn.nextLine(),partDesc=scn.nextLine();
        int qnt=scn.nextInt();
        double price=scn.nextDouble();
        Invoice inv=new Invoice(partNum, partDesc, qnt, price);
        if(inv.GetQuantity()<0){
            inv.SetQuantity(0);
        }
        if(inv.GetPrice()<0) inv.SetPrice(0.0);
        System.out.println("Inv is:"+inv.getInvoiceAmount());
    }

    
}
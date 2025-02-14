package snapshot.labtasks01;

/**
 * @author Alamgir Khan
 */
import java.util.*;
public class DigitOp {
    static void sumDig(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10);
            n/=10;
        }
        System.out.println(sum+ "\n");
    }
    static void fNlDig(int n){
        int dig=(int)Math.log10(n);
        int lDig=(n%10);
        int fDig=n/(int)(Math.pow(10, dig));
        int sum=lDig+fDig;
        System.out.println("1st dig is:"+ fDig+"\nlast dig is:"+lDig+"\nSum is:"+sum);
        
    }
    static void revNum(int n){
        String s=Integer.toString(n), str="";
        for(int i=0; i<s.length(); i++){
            str=s.charAt(i)+str;
        }
        System.out.println("Reversed num is:" +str+"\n");
    }
    static void palindrome(int n){
        String s=Integer.toString(n), str="";
        for(int i=0; i<s.length(); i++){
            str=s.charAt(i)+str;
        }
        if((s.equals(str)))
            System.out.println("The num is palindrome\n"+s);
        else
            System.out.println("The num is not palindrome\n");
        
    }
    static void armstrong(int n){
        int dig=(int) Math.log10(n)+1,tmp=n,it=0;
        int ar[]=new int[15];
        while(n>0){
            ar[it]=(n%10);
            n/=10;
            it++;
        }
        int sum=0;
        for(int i=0; i<10; i++){
            sum+=(int) Math.pow(ar[i], dig);
        }
        if(sum==tmp){
            System.out.println("Armstrong number\n");
        }
        else
            System.out.println("Not Armstrong number\n");            
    }
    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);
        int opt=10;
        while(opt>0) {            
            System.out.println("1.\tSum of All digit\n");
            System.out.println("2.\tSum of 1st and last digit\n");
            System.out.println("3.\tTotal number of digit\n");
            System.out.println("4.\tReverse number\n");
            System.out.println("5.\tPalindrome check\n");
            System.out.println("6.\tArmstrong number\n");
            System.out.println("7.\tQuit\n");
            System.out.println("Select an option\n");
            opt=scn.nextInt();
            int n;
            if(opt==1){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                sumDig(n);
            }
            
            if(opt==2){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                fNlDig(n);
            }
            
            if(opt==3){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                System.out.println("Total dig is:" +((int)Math.log10(n)+1));
            }
            
            if(opt==4){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                revNum(n);
            }
            
            if(opt==5){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                palindrome(n);
            }
            
            if(opt==6){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                armstrong(n);
            }
            
            if(opt==7){
                break;
            }
            
        }
        
    }
}

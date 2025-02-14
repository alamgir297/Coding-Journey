package snapshot.labtasks01;

/**
 * @author Alamgir Khan
 */
import java.util.*;
public class NaturalNumbers {
    
    static void print(int n){
        for(int i=1; i<=n; i++){
            System.out.println(i+"\n");
        }
    }
    
    static int sum(int n){
        int s=(n*(n+1))/2;
        return s;
    }
    
    static void sumEvenOdd(int n){
        int sEven=0,sOdd=0;
        for(int i=1; i<=n; i++){
            if((i&1)==0){
                sEven+=i;
            }
            else sOdd+=i;
        }
        System.out.println("Sum of even:"+sEven+ "\n");
        System.out.println("Sum of odd:"+sOdd +"\n");
    }
    
    static void prime(int n){
        boolean flag=true;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0){
                flag=false;
                break;
            }
        }
        if(flag) System.out.println("Prime number\n");
        else System.out.println("Not prime\n");
    }
    
    static void factorial(int n){
        long fact=1;
        for(int i=1; i<=n; i++){
            fact*=i;
        }
        System.out.println("factorial:"+fact+ "\n");
    }
    
    static void perfect(int n){
        int sum=0;
        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum+=i;
            }
        }
        if(sum==n) System.out.println("Perfect\n");
        else System.out.println("Not Perfect\n");
    }
    static void fibo(int n){
        int ar[]=new int[n];
        ar[0]=0;
        ar[1]=1;
        int n1=0,n2=1,curr=0;
        for(int i=2; i<n; i++){
            curr=n1+n2;
            ar[i]=curr;
            n1=n2;
            n2=curr;
        }
        for(int i=0; i<n; i++){
            System.out.println(ar[i]+" ");
        }
//        System.out.println("\n");
    }
    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);
        int opt=10;
        while(opt>0) {            
            System.out.println("1.\tPrint 1 to N\n");
            System.out.println("2.\tSum of 1 to N\n");
            System.out.println("3.\tSum of 1 to N (even/odd)\n");
            System.out.println("4.\tCheck for primality\n");
            System.out.println("5.\tFactorial of N\n");
            System.out.println("6.\tPerfect number\n");
            System.out.println("7.\tFibonacchi\n");
            System.out.println("83.\tQuit\n");
            System.out.println("Select an option\n");
            opt=scn.nextInt();
            int n;
            if(opt==1){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                print(n);
            }
            
            if(opt==2){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                System.out.println(sum(n));
            }
            
            if(opt==3){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                sumEvenOdd(n);
            }
            
            if(opt==4){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                prime(n);
            }
            
            if(opt==5){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                factorial(n);
            }
            
            if(opt==6){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                perfect(n);
            }
            
            if(opt==7){
                System.out.println("Enter a number\n");               
                n=scn.nextInt();
                fibo(n);
            }
            
            if(opt==8){
                break;
            }
            
        }
    }
}

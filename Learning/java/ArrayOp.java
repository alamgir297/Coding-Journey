package snapshot.labtasks01;

/**
 * @author Alamgir Khan
 */
import java.util.*;
public class ArrayOp {
    public static void main(String[] args) {
        Scanner scn= new Scanner(System.in);
        int opt=10;
        while(opt>0) {            
            System.out.println("1.\tPrint 1d array\n");
            System.out.println("2.\tPrint 2d array\n");
            System.out.println("3.\tSum of array + sum of (even/odd elements)\n");
            System.out.println("4.\tMax/2nd max/ 3rd max values\n");
            System.out.println("5.\tSum of 2 2d array\n");
            System.out.println("6.\tMultiplication of 2 2d array\n");
            System.out.println("7.\tQuit\n");
            System.out.println("Select an option\n");
            opt=scn.nextInt();
            int n;
            if(opt==1){
                System.out.println("Enter num of elements\n");               
                n=scn.nextInt();
                int ar[]=new int[n];
                for(int i=0; i<n; i++) ar[i]=scn.nextInt();
                for(int i=0; i<n; i++) System.out.println(ar[i]);
            }
            
            if(opt==2){
                System.out.println("Enter the size of matrix\n");               
                n=scn.nextInt();
                int m=scn.nextInt();
                int ar[][]=new int[n][m];
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        ar[i][j]=scn.nextInt();
                    }
                }
                for(int i=0; i<n; i++){
                    for(int j=0; j<m; j++){
                        System.out.println(ar[i][j]+ " ");
                    }
                    System.out.println("\n");
                }
            }
            
            if(opt==3){
                System.out.println("number of elements\n");               
                n=scn.nextInt();
                int ar[]=new int[n];
                for(int i=0; i<n; i++) ar[i]=scn.nextInt();
                int totSum=0, evSum=0, odSum=0;
                for(int i=0; i<n; i++){
                    totSum+=ar[i];
                    if((ar[i]&1)==0) evSum+=ar[i];
                    else odSum+=ar[i];
                }
                System.out.println("Total:"+totSum+ "\nEven val sum:"+evSum+ "\nOdd val sum:"+odSum+"\n");
            }
            
            if(opt==4){
                System.out.println("number of elements\n");               
                n=scn.nextInt();
                int ar[]=new int[n];
                for(int i=0; i<n; i++) ar[i]=scn.nextInt();
                Arrays.sort(ar);
                System.out.println("max:"+ar[n-1]+ "\n2nd max:"+ar[n-2]+ "\n3rd max:"+ar[n-3]+"\n");                
            }
            
            if(opt==5){
                System.out.println("1st matrix size\n");   
                int n1=scn.nextInt(), m1=scn.nextInt();
                int mat1[][]=new int[n1][m1];
                for(int i=0; i<n1; i++){
                    for(int j=0; j<m1; j++){
                        mat1[i][j]=scn.nextInt();
                    }
                }
                System.out.println("2nd matrix size\n");                   
                int n2=scn.nextInt(), m2=scn.nextInt();
                int mat2[][]=new int[n2][m2];
                for(int i=0; i<n1; i++){
                    for(int j=0; j<m1; j++){
                        mat2[i][j]=scn.nextInt();
                    }
                }
                int ans[][]=new int[n1][m1];
                if(n1==n2 && m1==m2){
                    for(int i=0; i<n1; i++){
                        for(int j=0; j<m2; j++){
                            int tmp=mat1[i][j]+mat2[i][j];
                            ans[i][j]=tmp;
                        }
                    }
                    for(int i=0; i<n1; i++){
                        for(int j=0; j<m1; j++){
                            System.out.println(ans[i][j]+ " ");
                        }
                        System.out.println("\n");
                    }                    
                }
                else System.out.println("array must be of same size\n");
            }
            
            if(opt==6){
                System.out.println("1st matrix size\n");   
                int n1=scn.nextInt(), m1=scn.nextInt();
                int mat1[][]=new int[n1][m1];
                for(int i=0; i<n1; i++){
                    for(int j=0; j<m1; j++){
                        mat1[i][j]=scn.nextInt();
                    }
                }
                System.out.println("2nd matrix size\n");                   
                int n2=scn.nextInt(), m2=scn.nextInt();
                int mat2[][]=new int[n2][m2];
                for(int i=0; i<n2; i++){
                    for(int j=0; j<m2; j++){
                        mat2[i][j]=scn.nextInt();
                    }
                }
                int ans[][]=new int[n1][m2];
                if(m1==n1){
                    for(int i=0; i<n1; i++){
                        for(int j=0; j<m2; j++){
                            ans[i][j]=0;
                            for(int k=0; k<n2; k++ ){
                                int tmp=(mat1[i][k])*(mat2[k][j]);
                                ans[i][j]+=tmp;
                            }
                        }
                    }
                }
                for(int i=0; i<n1; i++){
                    for(int j=0; j<m2; j++){
                        System.out.println(ans[i][j]+ " ");
                    }
                    System.out.println("\n");
                }
                
            }
            
            if(opt==7){
                break;
            }
            
        }
        
    }
}

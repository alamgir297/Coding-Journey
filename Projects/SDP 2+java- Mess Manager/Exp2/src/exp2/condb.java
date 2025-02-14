/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package exp2;

import java.sql.*; 

public class condb {
     public static Connection getCon(){
        try{
        Class.forName("com.mysql.jdbc.Driver");  
        Connection con=DriverManager.getConnection("jdbc:mysql://localhost:3306/mess_manager_1","root","");
        //System.out.println("Connection Successful");
        return con;
        }
        catch(Exception e)
        {
            System.out.println(e);
            return null;
        }
    }
}

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package exp2;

import java.sql.*;

public class Exp2 {

    
    public static void main(String[] args) {
        // TODO code application logic here
        try {
            Connection con = condb.getCon();
            Statement stm = con.createStatement();
            ResultSet rs = stm.executeQuery("select * from login");
          
            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}

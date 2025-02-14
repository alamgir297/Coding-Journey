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
            while (rs.next()) {
                System.out.println(rs.getInt(1) + "  " + rs.getString(2) + "  " + rs.getString(3));
            }
            con.close();
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}

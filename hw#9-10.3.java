/*
Implement update method (input: id, name, surname, grade) that update the values in row by id.
*/


package net.codejava.jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;


public class Update {

    public static void main(String[] args) {
        String dbURL = "jdbc:mysql://localhost:3306/sampledb";
        String username = "root";
        String password = "dauren2000";

        try (Connection conn = DriverManager.getConnection(dbURL, username, password)) {

            String sql = "UPDATE Users SET password=?, fullname=?, email=? WHERE username=?";

            PreparedStatement statement = conn.prepareStatement(sql);
            statement.setString(1, "dlove09092017");
            statement.setString(2, "Mustafina Karina");
            statement.setString(3, "k.mustafina@gmail.com");
            statement.setString(4, "muKarina");

            int rowsUpdated = statement.executeUpdate();
            if (rowsUpdated > 0) {
                System.out.println("An existing user was updated successfully!");
            }


        } catch (SQLException ex) {
            ex.printStackTrace();
        }
    }
}

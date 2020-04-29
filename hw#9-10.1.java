/*
Implement method create (input parameters: name, surname, grade) that inserts value into table.
*/



package net.codejava.jdbc;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;

public class Insert {

    public static void main(String[] args) {
        String dbURL = "jdbc:mysql://localhost:3306/sampledb";
        String username = "root";
        String password = "dauren2000";

        try (Connection conn = DriverManager.getConnection(dbURL, username, password)) {

            String sql = "INSERT INTO Users (username, password, fullname, email) VALUES (?, ?, ?, ?)";

            PreparedStatement statement = conn.prepareStatement(sql);
            statement.setString(1, "dlove09092017");
            statement.setString(2, "Mustafina Karina");
            statement.setString(3, "k.mustafina@gmail.com");
            statement.setString(4, "muKarina");

            int rowsInserted = statement.executeUpdate();
            if (rowsInserted > 0) {
                System.out.println("A new user was inserted successfully!");
            }


        } catch (SQLException ex) {
            ex.printStackTrace();
        }
    }
}

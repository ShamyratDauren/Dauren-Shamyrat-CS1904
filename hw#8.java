/*
Create a class with a main( ) that throws an object of class Exception inside a try block.
Give the constructor for Exception a String argument.
Catch the exception inside a catch clause and print the String argument.
Add a finally clause and print a message to prove you were there.
*/


package com.company;


class FirstException {
    FirstException(String massage) {
        massage="HELLO";
        System.out.println(massage);
    }
    public static void main(String[] args) throws Exception {
        try {
            throw new Exception();
        }
        catch(Exception e) {
            e.printStackTrace();
        }

        finally {
            System.out.println("Hello");
        }
    }

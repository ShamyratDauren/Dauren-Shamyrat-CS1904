package com.company;

/*
Create a class called Date that includes three instance variables-a month (type int), a day (type int) and a year (type int).
Provide a constructor that initializes the three instance variables and assumes that the values provided are correct. 
Provide a set and a get method for each instance variable. Provide a method displayDate that displays the month, day and year separated by forward slashes (/).
Write a test app named DateTest that demonstrates class Date's capabilities.

 */

public class Date {
    int day;
    int month;
    int year;


public Date(int d, int m, int y) {
    this.day = d;
    this.month = m;
    this.year = y;
}
public void setDay(int Days) {
    if (Days >= 0 && Days <= 31) {
        this.day = Days;
    } else {
        day = 1;
    }
}

public int getDay() {
    return day;
}

public void setMonth(int Months) {
    if (Months >= 0 && Months <= 12) {
        this.month = Months;
    } else {
        this.month = 1;
    }
}

public int getMonth() {
    return month;
}

public void setYear(int Years) {
    this.year = Years;
}

public int getYear() {
    return year;
}

public void displayDate() {
    System.out.printf("%d/%d/%d\n", getDay(), getMonth(), getYear());
}
}
<-----------------------DataTest---------------------->
package com.company;

import java.util.Scanner;

public class DateTest {
    public static void main(String[] args) {
        Date date = new Date(0, 0, 0);
        Scanner input = new Scanner(System.in);
        System.out.print("Enter Day: ");
        int d = input.nextInt();
        date.setDay(d);

        System.out.print("Enter Month: ");
        int m = input.nextInt();
        date.setMonth(m);

        System.out.print("Enter Year: ");
        int y = input.nextInt();
        date.setYear(y);

        date.displayDate();
    }
}

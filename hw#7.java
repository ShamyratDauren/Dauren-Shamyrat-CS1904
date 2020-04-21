package com.company;

interface ExcellentStudents{
    public int ExcellentScholarship();;
}
interface BadStudents {
    public int BadScholarship();
}

class GoodStudents implements ExcellentStudents, BadStudents {
    public int ExcellentScholarship = 35000;
    public int ExcellentScholarship(){
        return 35000;
    }

    public int BadScholarship = 10000;
    public int BadScholarship(){
        return 10000;
    }

    public int Scholarship = (ExcellentScholarship + BadScholarship) / 2;
}

class Main {
    public static void main(String[] args) {
        GoodStudents id = new GoodStudents();
        System.out.println(id.Scholarship);
    }
}

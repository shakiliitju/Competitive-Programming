package java;

public class Type_Casting {

    public static void main(String[] args) {

        int myInt = 9;
        double myDouble = myInt;    // Automatic casting : int to double

        System.out.println(myInt);     // Outputs 9
        System.out.println(myDouble);  // Outputs 9.0

        double mydouble = 9.78;
        int myint = (int) mydouble;  // Manual casting: double to int

        System.out.println(mydouble);   // Outputs 9.78
        System.out.println(myint);      // Outputs 9

    }

}

// ✅ variable = a reusable container for a value
//      a variable behaves as if it was the value it contains


// 🟥 Primitive = simple value stored directly in memory (stack)
// 🟦 Reference = memory address (stack) that points to the (heap)


// 🟥 Primitive vs 🟦 Reference
// -----------     -----------
// int              string
// double           array
// char             object
// boolean


// 2 Steps to creating a variable
//-------------------------------
// 1. Declaration
// 2. Assigment

class Intro{
    public static void main (String[] args){
        int age = 20;
        int year = 2026;

        System.out.println(age);
        System.err.println("The year is " + year);
    }
}
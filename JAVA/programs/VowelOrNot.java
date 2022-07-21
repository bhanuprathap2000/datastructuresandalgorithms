import java.util.Scanner;

public class VowelOrNot {

    public static void main(String[] args) {


        var scanner = new Scanner(System.in);// create a new scanner class and tell from where we are getting the input

        System.out.println("Enter the character:");

        char ch= scanner.next().charAt(0);// get the character at given index position from the string.
      
        //check if character is anyone from ['a', 'e','i','o','u']
        if ( ch =='a' || ch== 'e' || ch == 'i' || ch== 'o' || ch=='u'){

            System.out.println("It is vowel");

        }
        else{
            System.out.println("Not a vowel");
        }


    }

}

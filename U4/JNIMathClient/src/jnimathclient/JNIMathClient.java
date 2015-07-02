package jnimathclient;

/**
 *
 * @author Sala4
 */
public class JNIMathClient {

    static {
        // System.load("G:\\numeros_c\\JNIMathClient\\src\\jnimathclient\\MathLibrary.dll");
        System.loadLibrary("MathLibrary");
    }

    public native int addTwoNumbers(int one, int two);
    public native int multiplyTwoNumbers(int one, int two);

    public static void main(String args[]) {
        JNIMathClient client = new JNIMathClient();
        int num1, num2;

        num1 = 5;
        num2 = 100;
        System.out.println(num1 + " + " + num2 + " = "
                + client.addTwoNumbers(num1, num2));
        System.out.println(num1 + " * " + num2 + " = "
                + client.multiplyTwoNumbers(num1, num2));
    }
}//End class JNIMathClient

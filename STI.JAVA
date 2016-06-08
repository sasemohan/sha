import java.io.*;
import java.util.Scanner;
class StringToInt{
public static void main(String args[]){
int Intval;
String s;
System.out.println("Enter a number");
Scanner scan=new Scanner(System.in);
s=scan.next();
try{
Intval=Integer.parseInt(s);
System.out.println("This is an integer: "+Intval);
}catch (NumberFormatException e){
System.out.println("Enter a valid integer ");
}


}
}

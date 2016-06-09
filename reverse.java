/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in=new Scanner(System.in);
		//String name=in.next();  
		String string=in.next();
      String reverse = new StringBuffer(string).reverse().toString();
      System.out.println(reverse);
}
}

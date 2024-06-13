import java.io.*;
import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

public class Altoarray
{
	public static void main(String args[])
	{
		ArrayList<Integer>al=new ArrayList<Integer>();
		al.add(10);
		al.add(20);
		al.add(30);
		al.add(40);
		al.add(50);
		al.add(60);
		Object[] objects = al.toArray();
		for(Object obj:objects)
			System.out.print(obj+" ");
	}
}
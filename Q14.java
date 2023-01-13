 // Q14.Write a java program for copying characters from one file to another
  //file.

    import java.util.Scanner;
    import java.io.*;
    
    public class Q14
    {
       public static void main(String[] args)
       {
          String sourceFile, destFile, line, content="";
          Scanner sc = new Scanner(System.in);
          
          System.out.print("Enter the Name of Source File: ");
          sourceFile = sc.nextLine();
          try
          {
             FileReader fr = new FileReader(sourceFile);
             BufferedReader br = new BufferedReader(fr);
             
             for(line=br.readLine(); line!=null; line=br.readLine())
                content = content + line + "\n";
             
             br.close();
             
             System.out.print("Enter the Name of Destination File: ");
             destFile = sc.nextLine();
             
             try
             {
                FileWriter fw = new FileWriter(destFile);
                fw.write(content);
                fw.close();
                System.out.println("\nFile copied successfully!");
             }
             catch(IOException ioe)
             {
                System.out.println("\nSomething went wrong!");
                System.out.println("Exception: " +ioe);
             }
          }
          catch(IOException ioe)
          {
             System.out.println("\nSomething went wrong!");
             System.out.print("Exception: " +ioe);
          }
       }
    }

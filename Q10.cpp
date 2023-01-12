//Q10.Write a Java program to display the value of any two integer
//numbers using method overriding.



  
// Base Class
class Parent {
  void show()
  {
      System.out.println("First value is = 20");
  }
}

// Inherited class
class Child extends Parent {
  // This method overrides show() of Parent
  @Override
  void show()
  {
      System.out.println("Second value is =40");
  }
}

// Driver class
class Q10 {
  public static void main(String[] args)
  {
      Parent obj1 = new Parent();
      obj1.show();

      Parent obj2 = new Child();
      obj2.show();
  }
}

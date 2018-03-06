import java.util.*;

class Student{
   private int id;
   private String fname;
   private double cgpa;
   public Student(int id, String fname, double cgpa) {
      super();
      this.id = id;
      this.fname = fname;
      this.cgpa = cgpa;
   }
   public int getId() {
      return id;
   }
   public String getFname() {
      return fname;
   }
   public double getCgpa() {
      return cgpa;
   }
}

class MySort implements Comparator<Student> {
    
    public int compare(Student a, Student b) {
        double cgpaDiff = (b.getCgpa() - a.getCgpa());
        
        if (cgpaDiff != 0.0) {
            if (cgpaDiff > 0) return 1;
            else return -1;
        }
        
        int nameDiff = a.getFname().compareTo(b.getFname());
        
        if (nameDiff != 0) return nameDiff;
        
        return a.getId() - b.getId();
    }
    
}

//Complete the code
public class Solution
{
   public static void main(String[] args){
      Scanner in = new Scanner(System.in);
      int testCases = Integer.parseInt(in.nextLine());
      
      List<Student> studentList = new ArrayList<Student>();
      while(testCases>0){
         int id = in.nextInt();
         String fname = in.next();
         double cgpa = in.nextDouble();
         
         Student st = new Student(id, fname, cgpa);
         studentList.add(st);
         
         testCases--;
      }
       
        Collections.sort(studentList, new MySort());
      
        for(Student st: studentList){
            System.out.println(st.getFname());
        }
   }
}

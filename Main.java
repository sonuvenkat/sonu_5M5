public class Main {

	public static void main(String[] args) {

Student s=new Student(1232,"venkat",90.2);
StudentGroup sg=new StudentGroup(100);
//sg.getStudents();	
//sg.setStudent(s,1);	
sg.addLast(s);
sg.getStudent(0);


		//You may test that your code works find here
		//Please check that your code works and has no 
		//compilation problems before to submit
	}

}

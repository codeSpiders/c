package cn.hengyan.day40;

public class F1Test {
	public static void main(String[] args) {
		Generic<String> g=new Generic<>("abcd");
		System.out.println(g.getkey());
		
		Generic g2=new Generic("efgh"); 
		System.out.println(g2.getkey());
		
		Generic g3=new Generic(3520); 
		System.out.println(g3.getkey());
		
		Generic g4=new Generic(1.68); 
		System.out.println(g4.getkey());
	}
}

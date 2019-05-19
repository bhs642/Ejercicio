package paquete;

import java.util.Stack;

class Libro {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
				
		int pg1=100;
		int pg2=50;
		String autor = "Juan";
		String autor2= "Maria";
		String titulo = "Los 7 enanitos";
		String titulo2= "Blancanieves";
		
	
		Stack libro = new Stack();
		libro.push(autor);
		libro.push(pg1);
		libro.push(titulo);
		libro.push(autor2);
		libro.push(pg2);
		libro.push(titulo2);
		
		System.out.println("Stack Libro: "+libro.peek());
		
		if(pg1>pg2) {
		while(libro.empty()==false) {
			System.out.println(libro.pop());
		}
	}
	}
}

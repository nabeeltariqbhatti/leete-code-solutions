import java.util.*;

public class Graph{

	public static void main(String[] args){
	
		List<List<Integer>> adj = new ArrayList<>(5);

		for(int i =0; i<5;i++ ){
		adj.add(i,new ArrayList<>());
		}
		adj.get(0).add(1);
		adj.get(0).add(3);
		adj.get(1).add(2);
		adj.get(3).add(2);
		adj.get(3).add(4);
		/*
		 * {
		 *   { 1,3},
		 *   {2},
		 *    {},
		 *    {2,4},
		 *    {}
		 * */
		for(int i = 0; i<5;i++){
		
			System.out.println("Neighbouring nodes of "+ (char)(i+'A'));
			for(Integer el : adj.get(i)){
			
				System.out.print( " " + (char)(el +'A'));
			}
			System.out.println();
		}
		
	
	}

}

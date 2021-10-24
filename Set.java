import java.util.ArrayList;
import java.util.List;


public class Set {

    ArrayList<Zoadiac> z = new ArrayList<>();


    int cardinality(){
        return z.size();
    }


    public void union(ArrayList setA, ArrayList setB) {

        System.out.print("A="+setA+"\n");

        System.out.print("B="+setB+"\n");


        setA.addAll(setB);

        List unique = new ArrayList();

        for(Object s: setA){
            if(unique.contains(s)){
                continue;
            }else {
                unique.add(s);
            }

        }

        System.out.println("AUB="+unique+"\n");


    }



    public void subset(ArrayList setA, ArrayList setB) {

        System.out.print("A="+setA+"\n");
        System.out.print("B="+setB+"\n");



        if(setA.size()>setB.size()){
            if(setA.containsAll(setB)){
                System.out.println("B is a subset of A: " +"true");
                System.out.println("A is  a subset of B: " +"False");
            }
        }else if(setA.size()<setB.size()){
            if(setB.containsAll(setA)){
                System.out.println("A is a subset of B: " +"true");
                System.out.println("B is  a subset of A: " +"False");
            }
        }else if(setA.size()==setB.size() && setA.containsAll(setB) && setB.containsAll(setA)){
            System.out.println("A=B");
        }else {
            System.out.println("Neither equal nor subset");
        }



    }


    public void intersection(ArrayList setA, ArrayList setB) {




         setA.retainAll(setB);

        System.out.print("A I B ="+setA+"\n");



    }



    public void difference(ArrayList<Zoadiac> z, ArrayList<Zoadiac> z1) {

        System.out.print("A="+z+"\n");
        System.out.print("B="+z1+"\n");



        for(Zoadiac checker:z){
            if(z1.contains(checker)){
                z.remove(checker);

            }
        }




    }

    public void complement(ArrayList<Zoadiac> z) {

        System.out.print("A="+z+"\n");
        List<Zoadiac> comp = new ArrayList<>();
        for(Zoadiac c:Zoadiac.values()){

            if(z.contains(c)){
                continue;
            }else {
                comp.add(c);
            }
        }
        System.out.print("A\'="+comp+"\n");
    }
}

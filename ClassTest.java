import java.util.*;

import java.util.stream.IntStream;

public class ClassTest{
    public static Set set = new Set();
    public static  Set setB = new Set();
    public  static Set setC = new Set();
    public static void displayZodiacSigns(){
        System.out.println("Zodiac Signs \t\t" + "known as \t\t" + "for example \t\t");
        for(Zoadiac z: Zoadiac.values()){

            System.out.println(z.toString().charAt(0)+(z.toString().substring(1).toLowerCase(Locale.ROOT)) +"\t\t" + z+ "\t\t" +   z.getValue());
        }
    }

    public static void addAnElement(Zoadiac sign){

        if(set.z.contains(sign)){

        }else {
            set.z.add(sign);
        }


    }

    public static boolean checkAnElement(String sign){

        Zoadiac zcheck = Zoadiac.valueOf(sign.toUpperCase(Locale.ROOT));
        if(set.z.contains(zcheck)==true) return true;
        return false;


    }
    public static int checkCardinality(){
        return set.cardinality();
    }

    public static void enumFormat()
    {

        System.out.println("{");
        for(Zoadiac c : set.z){
            System.out.print(c+",");
        }
        System.out.println("}\n");

    }


   public static void union(ArrayList setA,ArrayList setB){

        set.union(setA,setB);
   }


    public static void subset(ArrayList setA,ArrayList setB){

        set.subset(setA,setB);
    }

    public static void intersection(ArrayList setA,ArrayList setB){
        set.intersection(setA,setB);
    }
    private static void difference(ArrayList<Zoadiac> z, ArrayList<Zoadiac> z1) {
        set.difference(z,z1);
    }

    private static void complement(ArrayList<Zoadiac> z) {

        set.complement(z);
    }

    public  static  void distributiveLaw(){

        System.out.println("Not: Sets are generated randomly".toUpperCase(Locale.ROOT));

        System.out.print("A="+set.z+"\n");

        System.out.print("B="+setB.z+"\n");

        System.out.print("C="+setC.z+"\n");


          List<Zoadiac> B=setB.z;
          List<Zoadiac> A=set.z;
          List<Zoadiac> C=setC.z;
          B.retainAll(setC.z);

          A.addAll(B);

        List unique = new ArrayList();

        for(Object s: A){
            if(unique.contains(s)){
                continue;
            }else {
                unique.add(s);
            }

        }

        System.out.print("A U (B I C)="+unique+"\n");




        B=setB.z;
        A=set.z;
        C=set.z;
        List<Zoadiac> AUB = A;
        List<Zoadiac> AUC = A;

        AUB.addAll(A);
        AUC.addAll(C);
        Map<Zoadiac,Boolean> _map=new HashMap<>();
        for(Zoadiac c:AUB){
            _map.put(c,true);
        }
        for(Zoadiac c:AUC){
            _map.put(c,true);
        }

        List<Zoadiac> un= new ArrayList<>(_map.keySet());
        System.out.print("(A U B ) I (A U C)="+un+"\n");











    }
    public static void main(String args[]){




        displayZodiacSigns();







        Scanner sc = new Scanner(System.in);
        int choice =-1;
        int choiceOuter =-1;
        Scanner c2 = new Scanner(System.in);
        String sign="";
        Random random = new Random();
        Zoadiac[]cards=Zoadiac.values();

        int rand = random.nextInt(cards.length);
        for(int i=0; i<40; i++){


            if(!set.z.contains(cards[rand]) && set.z.size() < 4){
                set.z.add(cards[rand]);
            }
            rand = random.nextInt(cards.length);
            if(!setB.z.contains(cards[rand])  && setB.z.size()<4 ){
                setB.z.add(cards[rand]);
            }


            rand = random.nextInt(cards.length);
            if(!setC.z.contains(cards[rand])  && setC.z.size()<4 ){
                setC.z.add(cards[rand]);
            }
            rand = random.nextInt(cards.length);



        }




        while(choiceOuter!=9){

            System.out.println("Welcome to sim set theory lesson");
            System.out.println("0: properties of set");
            System.out.println("1: union example");
            System.out.println("2:  intersection");
            System.out.println("3: subset");
            System.out.println("4:  difference");
            System.out.println("5: set equality");
            System.out.println("6:  distributive law 1");
            System.out.println("7:  distributive law 2");
            System.out.println("8:  complement");
            System.out.println("9:  quit");

            System.out.println("your option: ");
            choiceOuter = sc.nextInt();


            if(choiceOuter == 0){
                System.out.println("properties of set".toUpperCase());


                System.out.println("Example of set".toUpperCase());




                System.out.print("A={");
                for(Zoadiac c:set.z){
                    System.out.print(c+",");
                }
                System.out.print("}\n");

                System.out.println("All elements in the set are distinct and in random order");


                System.out.println("Some basic operations of set..");

                while(choice !=9){
                    System.out.println("1: Add an element");
                    System.out.println("2:  enum year");
                    System.out.println("3: check an element");
                    System.out.println("4:  cardinality");
                    System.out.println("5: enum format");

                    System.out.println("9:  quit");
                    choice = sc.nextInt();

                    if(choice==1){


                        System.out.println("Enter Element: ");

                        sign = c2.nextLine();

                        Zoadiac newZodiac = Zoadiac.valueOf(sign.toUpperCase(Locale.ROOT));

                        addAnElement(newZodiac);
                        Iterator<Zoadiac> it = set.z.iterator();
                        System.out.print("{");
                     for(Zoadiac c:set.z){
                         System.out.print(c+",");
                     }
                        System.out.print("}\n");
                    }else if(choice==2){


                        System.out.print("{");
                        for(Zoadiac x: set.z){
                            System.out.print(x.getValue()+",");
                        }
                        System.out.println("}");
                    }else if(choice==3){
                        System.out.println("Enter Element: ");
                        sign = c2.nextLine();

                        if(checkAnElement(sign)==true){
                            System.out.println("Element" +  sign+ "  is present there");
                        }else {
                            System.out.println("Element " +  sign+ "  is not present there");
                        }





                    }else  if(choice==4){

                        System.out.println("No of elements in the set is "+ checkCardinality());
                    }else if(choice==5){
                        enumFormat();
                    }
                }





            }else  if(choiceOuter==1){
              union(set.z,setB.z);


            }
            else  if(choiceOuter==2){
                System.out.print("A=");
                System.out.print(set.z+"\n");


                System.out.print("B=");

                System.out.print(setB.z+"\n");


             intersection(set.z, setB.z);


            }

            else if(choiceOuter==3){
               int  rando = (int)Math.round(Math.random());



                    for(int i=0; i<20; i++){
                        rand = random.nextInt(cards.length);
                        if(rando==0){

                        if(!set.z.contains(cards[rand])){
                            set.z.add(cards[rand]);
                        }
                        if(set.z.size()==6){
                            break;
                        }
                    }else {
                            if(!setB.z.contains(cards[rand])){
                                setB.z.add(cards[rand]);
                            }
                            if(setB.z.size()==6){
                                break;
                            }
                        }
                }
                subset(set.z,setB.z);
            }else if(choiceOuter==4){
//                difference(set.z,setB.z);

//                List list = set.z;
//                for(Object x:list){
//
//                    if(setB.z.contains(x)){
//                        set.z.remove(x);
//                    }
//                }
//                System.out.println(set.z);
            }else if(choiceOuter==6){

                distributiveLaw();
            }

            else if(choiceOuter==8){

                complement(set.z);
            }

        }






    }




}

public enum Zoadiac {


    RAT("Year 1948"),
    OX("Year 1949"),
    TIGER("Year 1950"),
    RABBIT("Year 1951"),
    DRAGON("Year 1952"),
    SNAKE("Year 1953"),
    HORSE("Year 1954"),
    GOAT("Year 1955"),
    MONKEY("Year 1956"),
    ROOSTER("Year 1957"),
    DOG("Year 1958"),
    PIG("Year 1959");


    public final String year;

    private Zoadiac(String year){
        this.year=year;
    }
    public String getValue() {
        return this.year;
    }




}

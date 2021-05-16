class StockSpanner {
   private List<Integer> _span;
   private List<Integer> _prices;

public    StockSpanner() {
        _span = new ArrayList();
        _prices = new ArrayList();
    }
    
 public  int next(int price) {
        int idx = _prices.size()-1;
        
        while(idx >= 0 && _prices.get(idx) <= price){
            int span = _span.get(idx);
            
            
            idx = idx - span;
            
        }
        _prices.add(price);
        
        int span = _prices.size() - 1 - idx ;
        
        _span.add(span);
        return span;
    }
}

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner obj = new StockSpanner();
 * int param_1 = obj.next(price);
 */

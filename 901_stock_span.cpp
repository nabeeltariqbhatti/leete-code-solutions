class StockSpanner {
    vector <int> _span;
    vector <int> _prices;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int idx = _prices.size()-1;
        cout<<"idx"<< " " << idx << endl;
        
        while(idx >= 0 && _prices[idx] <= price){
            int span = _span[idx];
             idx = idx - span;
            cout<< "int span = _span[idx] =>" <<" "<<span<< " idx = idx - span => " << " " << idx <<endl;
           cout<<"price =>" << " " << price << "  _prices[idx]" << " " << _prices[idx]<<endl;
            
        }
        
        _prices.push_back(price);
        
        int span = _prices.size() - 1 - idx ;
        
        cout<<" span " <<" "<< span<<endl;
        
        _span.push_back(span);
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

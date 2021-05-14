class Solution {
    public List<String> simplifiedFractions(int n) {
         List<String> result = new ArrayList();
        Set <Float>  _set = new HashSet();
        
        for (int i=1; i < n ; i++){
            
            for(int j = i+1; j<=n; ++j){
                float fraction = (float) (i) / j;
                
                if(_set.contains(fraction) == false){
                    result.add(i + "/" + j);
                    _set.add(fraction);
                }
            }
        }return result;
        
        
    }
}

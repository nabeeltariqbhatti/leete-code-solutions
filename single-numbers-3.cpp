//time optimized solution   
unsigned int xy = 0;
        for(int num : nums){
            xy ^=num;
        }
        xy &= -xy;
        vector<int> result = {0,0};
        for(int num : nums){
            if(xy & num) result[0] ^= num;
            else result[1] ^= num;
        }
        return result;
        //naive one
        map<int,int> _map;
        vector<int> result;
        for(int num: nums){
            if(_map.find(num) == _map.end()){
                cout<<num;
                _map.insert(std::pair<int,int>(num,1));
            }else{
                _map.at(num) +=1;
            }
        }
        for(auto& item : _map){
            if(item.second==1){
                result.push_back(item.first);
            }
            
        }
        return result;

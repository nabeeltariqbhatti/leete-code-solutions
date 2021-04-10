 unordered_map<int,int> map;
    for(auto a: arr){
        if(map.find(a)!= map.end()){
            map[a]++;
        }else{
            map[a]=1;
        }
    }
    int result;
    
    for(auto num: map){
        if(map.find(num.first+1) != map.end()){
            result += num.second;
        }
    }
    return result;
    }

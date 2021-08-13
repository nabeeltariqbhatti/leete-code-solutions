#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> _vector;
	int T;

	
	cin>>T;
	
	while(T--){
	    map<int,int> _map;
	   int K,N;
	   cin>>N;
	   cin>>K;
	   int arr[N]={0};
	   
	   for(int i=0; i<N; i++){
	       
	       cin>>arr[i];
	       
	       if(_map.find(arr[i]) == _map.end()){
	           
	           _map.insert(std::pair<int,int>(arr[i],1));
	       }else{
	           _map[arr[i]]++;
	       }
	       
	       if(_map[arr[i]] > K){
	           _vector.push_back(arr[i]);
	       }
	   }
	   if(_vector.empty()){
	       _vector.push_back(-1);
	   }
	   std::sort(_vector.begin(), _vector.end());
	   _vector.erase( unique( _vector.begin(), _vector.end() ), _vector.end() );
	   _map.clear();
	   	for(int value : _vector){
	   	    
	    cout<<value<< " ";
	}
	cout<<"\n";
	_vector.clear();
	  
	   
	}

	return 0;
}

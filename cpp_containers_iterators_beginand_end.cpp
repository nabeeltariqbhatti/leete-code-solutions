/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>

using namespace std;
int main()
{
   vector<int > v={1,2,3,4,5,6,7,8} ;
  //dereferencing
   cout<<*v.begin()<<endl;
    int *x=&v[6];
    
    x++;
    *x=-50;
    cout<<*v.end()<<endl;
    cout<<*v.rbegin()<<endl;
    cout<<*v.rend()<<endl;
    
   


    return 0;
}




//itertaor invalidation



/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>

using namespace std;
int main()
{
   vector<int > v={1,2,3,4,5,6,7,8} ;
   
   
   auto it=v.begin()+4;
   
   cout <<"*it => v.begin()+4"<< " " << *it<<endl;
   
   cout<< "*it => it - v.begin()"<< " "<< it - v.begin()<<endl;
   
   
   //insert the value before the iterator's value
    //you will get surprise at index 4 because it is now invalidated to validate itr we need to assign the iterator again after insertion
   
   
   it=v.insert(it, 100);//{1,2,3,4,100,5,6,7,8}
   
  
    cout <<"*it => v.begin()+4"<< " " << *it<<endl;
   
   cout<< "*it => it - v.begin()"<< " "<< it - v.begin()<<endl;
   cout<<"v[4]"<< " "<< v[4]<<endl;
   
   
    
   


    return 0;
}



/******************************************************************************

Welcome to GDB Online.  vector methods
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>

using namespace std;
int main()
{
   vector<int > v={1,2,3,4,5,6,7,8} ;
   
   
  cout<<"v.size() => "<< " "<< v.size()<<endl;
  
  cout<<"v.capacity() => "<< " "<< v.capacity()<<endl;
  
  cout<<"v.max_size() => "<< " "<< v.max_size()<<endl;
  
  cout<<"v.puh_back(200)"<<endl;
  v.push_back(200);
  
  
  for(int n : v){
      cout<<n<<endl;
  }
  
  cout<<"v.back()"<< " "<<v.back();
  v.pop_back();
  cout<<"v.pop_back()"<<endl;
   for(int n : v){
      cout<<n<<endl;
  }
  
  cout<<v[4]<<endl;
  
  
  cout<<v.at(4)<<endl;
  
  cout<<"v.front()"<< " "<<v.front()<<endl;
  
  v.erase(v.begin()+1,v.begin()+2);
  cout<<"v.erase(optional index)"<<endl;

  cout<<"v.pop_back()"<<endl;
   for(int n : v){
      cout<<n<<endl;
  }
  
    return 0;
}




/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
#include <list>

using namespace std;

void print_list(list<int> &ll){
    for(list<int>::iterator it=ll.begin(); it!=ll.end(); it++){
        cout<<*it<<"\t";
        
    }
    cout<<endl;
}
int main()
{

  list <int> nums={0,1,2,3,4,5,6};
  print_list(nums);
  
  cout<<"nums.size()"<<" "<<nums.size()<<endl;
  list<int>nums2=nums;
  cout<<"nums2.size()"<< " "<<nums2.size()<<endl;
  cout<<"nums2.front()"<< " " <<nums2.front()<<endl;
  
  cout<<"nums2.back()"<< " "<< nums2.back()<<endl;
  
  cout<<"nums2.empty()" << " " <<std::boolalpha<< nums.empty()<<endl;
 cout<<*nums2.begin() << " ," << *nums2.rbegin()<<endl;
 
 
 
 list<int>::iterator it=nums.begin();
 
 while(*it != 3 && it!=nums.end()) it++;
 
 nums.insert(it,2000);
 
 print_list(nums);
 
 nums.erase(it);
 print_list(nums);
 
 nums.remove(2000);
 
 print_list(nums);
 
 nums.clear();
 
 print_list(nums);
 
 cout<< "empty "<< std::boolalpha<<nums.empty()<<endl;
 
 cout<<"nums2.empty"<<std::boolalpha<<nums2.empty()<<endl;
 
 nums.push_back(10);
 cout<<"nums.push_back(10)"<<endl;
 print_list(nums);
 
//  nums.insert(nums.begin()+1, 100);
 
 
//  print_list(nums)<<endl;
    return 0;
}


//deque

#include <iostream>
#include<vector>
#include <deque>

using namespace std;


int main()
{

  deque <int> nums={0,1,2,3,4,5,6};

  
  cout<<"nums.size()"<<" "<<nums.size()<<endl;
  
  cout<<" front " << nums.front()<< " " << nums.back()<<endl;
  cout<<"value at 2 index"<<" " <<nums[2]<<endl;
  
  
  for(deque<int>::reverse_iterator it=nums.rbegin(); it!=nums.rend(); it++){
      cout<<*it<< " \t";
  }
  cout<<endl;
  nums.push_back(22);
  cout<<" nums.push_back(22)" << " "<<endl;
  
  
   for(deque<int>::iterator it=nums.begin(); it!=nums.end(); it++){
      cout<<*it<< " \t";
  }
  cout<<endl;
  nums.push_front(-1222);
  cout<<" nums.push_front(24)" << " "<<endl;
  for(deque<int>::iterator it=nums.begin(); it!=nums.end(); it++){
      cout<<*it<< " \t";
  }
  
  
  cout<<"\n";
   nums.pop_front();
  cout<<" nums.pop_front()" << " "<<endl;
  for(deque<int>::iterator it=nums.begin(); it!=nums.end(); it++){
      cout<<*it<< " \t";
  }
  
   
  cout<<"\n";
   nums.pop_back();
  cout<<" nums.pop_back()" << " "<<endl;
  for(deque<int>::iterator it=nums.begin(); it!=nums.end(); it++){
      cout<<*it<< " \t";
  }
  
  
  nums.clear();

    return 0;
}



#include <iostream>
#include<stack> ;

using namespace std;


int main()
{

  stack <int> nums;
  
  for(int i=0;i<20;i++){
      nums.push(i);
  }

  
  cout<<"nums.size()"<<" "<<nums.size()<<endl;
  
  cout<<" top" << nums.top()<< " "<<endl;

  
 
  cout<<endl;
  nums.push(22);



  
 
  cout<<endl;

  
  cout<<"\n";
   nums.pop();

  
   



    return 0;
}





#include <iostream>
#include<queue> 

using namespace std;


int main()
{

  queue <int> Q;
  
  for(int i=0; i<20; i++){
      Q.push(i);
  }
  
  cout<<endl;
  
  cout<<"fornt" << " " << Q.front()<< " back" << Q.back()<<endl;
  
  cout<<Q.size();
  

  
   



    return 0;
}




//priority queue


#include <iostream>
#include<queue> 
#include <vector>

using namespace std;



int main()
{

  priority_queue <int, vector<int> , std::greater<int>> Q;
  vector <int> v={1,2,3,10,4,5};
  for (int num :v){
      Q.push(num);
  }
  
  cout<<endl;
  
  while(!Q.empty()){
      cout<<Q.top()<< " \t";
      Q.pop();
  }
  

  
  cout<<Q.size();
  

  
   



    return 0;
}

//sets


/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <set> 
#include<string>
#include<vector>

using namespace std;

class Student{
  
  public:
    string name;
    int id;
    
    void print_student()const{
        cout<< " name = " <<name << " " << id<<endl;
    }
    
    bool operator < (const Student& other) const{
        return (this->id <other.id);
        
    }
    
  
};

int main()
{
    set<int> _set={10,30,40,40,10,40,30,40,7,8,9,10,30,3};
    
    cout<< " _set.size()" << " " << _set.size()<<endl;
    
    
    _set.insert(30);
    
    for(auto element:_set){
        cout<<element<< "\t";
    }
    
    
    cout<<endl;
    
     cout<< " _set.size()" << " " << _set.size()<<endl;
     
     
     int num_erased= _set.erase(40);
     
     
     cout<<num_erased<<endl;
     
     
      for(auto element:_set){
        cout<<element<< "\t";
    }
    
    cout<<endl;
    
    auto it =_set.upper_bound(3);
    
    cout<<*it<<endl;
        for(auto element:_set){
        cout<<element<< "\t";
    }
    
    cout<<endl;
     auto itlb =_set.lower_bound(10);
    cout<<*itlb<<endl;
    
    
    cout<<endl;
    
    _set.insert({-10,-40,-4});
    
    vector <int > v={20,50,40,30,5,7};
    
    _set.insert(v.begin(),v.end());
       for(auto element:_set){
        cout<<element<< "\t";
    }
    
    cout<<endl;
    
    
    set <Student> _student={{"nabeel bhatti" ,1},{"Husnain Rajput" ,1}};
    
    
    for(auto ss:_student){
        ss.print_student();
    }
    

    return 0;
}


#include <iostream>
#include <functional>
#include <unordered_set>

using namespace std;

class Student{
public:
  int id;
  string name;

  bool operator==(const Student& s) const{
    return (this->id == s.id && this->name == s.name);
  }

  void print_student() const {
    cout << "[ id = " << id << ", name = " << name << "]\n";
  }

};

class StudentHashFunction{
public:
  size_t operator()(const Student& s) const{
    return (hash<int>{}(s.id) + hash<string>{}(s.name));
  }
};

int main(){

  /*
  size_t h1 = hash<string>{}("hello");
  size_t h2 = hash<string>{}("World");
  cout << h1 << ", " << h2 << endl;
  cout << hash<int>{}(100) << endl;
  cout << hash<float>{}(100.5) << endl;
  */

  unordered_set<int> us = {5, 10, 4, 20, 5, 5, 15};
  for(int x: us)
    cout << x << " ";
  cout << endl;

  cout << "size = " << us.size() << endl;
  cout << "count(5) = " << us.count(5) << endl;
  cout << "num erased(5) " << us.erase(5) << endl;
  cout << boolalpha << "found 16 = " << (us.find(16) != us.end()) << endl;
  cout << "num buckets = " << us.bucket_count() << endl;
  cout << "load factor = " << us.load_factor() << endl;

  unordered_set<Student, StudentHashFunction> uss = {{50, "Simon"}, {20, "Thomas"}};
  for(auto& st: uss)
    st.print_student();


    return 0;
}



/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int,string> m={{10,"cat"},{20,"Dog"}, {5, "Hipo"}, {5,"bat"}};
    
    cout<<"size" << " "<< m.size()<<endl;
    
    m.insert({30,"Cow"});
    
    
    m.insert({20,"Dog"});
    
    for(auto item:m){
        cout<<"{ "<<item.first<< " "<< item.second<< " }"<<endl;
    }
    
    cout<<"After Delection of cat"<<endl;
    
int it=m.erase(10);


for(auto item:m){
        cout<<"{ "<<item.first<< " "<< item.second<< " }"<<endl;
    }
    return 0;
}


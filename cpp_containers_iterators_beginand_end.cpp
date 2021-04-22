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



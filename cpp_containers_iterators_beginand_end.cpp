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


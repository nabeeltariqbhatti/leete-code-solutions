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

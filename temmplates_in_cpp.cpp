/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
template <typename T>
    T area(T a, T b){
         T c= a*b;
         return c;
    }
int main()
{
   float c=area<float>(3.9,4);
   cout<<c<<endl;

    return 0;
}

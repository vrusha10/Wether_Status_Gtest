/******************************************************************************

It is Function Taking variable Number Of arguments of any datatype.

Why Used?
allowed a single implementation of create to handle all possible types and all constructors for each type

*******************************************************************************/
#include <iostream>

using namespace std;
void fun()
{
    cout<<"Fun"<<endl;
}
template<typename T,typename ... Types>
void fun(T a,Types ... b)
{
    cout<<a<<endl;
    fun(b...);
}
int main()
{
    fun(1,2.3,"vrushabh",'D');
}

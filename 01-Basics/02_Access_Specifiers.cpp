//access specifiers in c++
#include<iostream>
using namespace std;

class A
{                   //by default all members of a class are private
    private:        //private members are accessible only within the class
    int a;
    public:         //public members are accessible from anywhere
    int b;
    protected:      //protected members are accessible within the class and its derived classes(INHERITANCE)
    int c;
};
int main()
{
    A obj;
    //obj.a=10; //error: 'int A::a' is private within this context
    obj.b=20; //allowed: 'b' is public
    cout<<obj.b<<endl; //allowed: 'b' is public
    //obj.c=30; //error: 'int A::c' is protected within this context
    
    return 0;
}
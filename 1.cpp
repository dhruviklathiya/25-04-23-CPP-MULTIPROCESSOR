// MERTHOD OVERRIDING
#include<iostream>
using namespace std;
class A{
    public:
    void display(int n1){
        cout<<"CLASS A"<<n1;
    }
};
class B : public A{
    public:
    void display(int n1){
        cout<<"CLASS B"<<n1<<endl;
    }
};
int main (){
    B obj1;
    obj1.display(20);
    obj1.A::display(20);
    return 0;
}

#include<iostream>
using namespace std;
class A{
    public:
    void display(int n1){
        cout<<"OUTPUT WHEN PASSING ONLY 1 PARAMETER"<<endl;
        cout<<"First n1: "<<n1<<endl;
    }
    public:
    void display(int n1,int n2){
        cout<<"OUTPUT WHEN PASSING ONLY 2 PARAMETER"<<endl;
        cout<<"second n1&n2===> n1: "<<n1<<n2<<endl;
    }
    public:
    void display(int n1,int n2,int n3){
        cout<<"OUTPUT WHEN PASSING ONLY 3 PARAMETER"<<endl;
        cout<<"Third n1&n2&n3===> n1: "<<n1<<" n2: "<<n2<<" n3: "<<n3<<endl;
    }
};
int main (){
    A obj;
    obj.display(10);
    obj.display(10,20);
    obj.display(10,20,30);
    return 0;
}



#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void set(int n1){
        a = n1;
        cout<<"Value of a: "<<a<<endl;
    }
    void setB(int n1){
        b = n1;
        cout<<"Value of b: "<<b<<endl;
    }
    A operator ++ (){
        A obj;
        obj.a = ++a;
        return obj;
    }
    A operator ++ (int){
        A obj;
        obj.a = a++;
        return obj;
    }
    A operator - (){
        A obj;
        obj.b = --b;
        obj.a = --a;
        return obj;
    }
    A operator - (int){
        A obj;
        obj.b = b--;
        obj.a = a--;
        return obj;
    }
};
int main (){
    A obj1,obj2;
    obj1.set(20);
    obj2 = obj1++;
    cout<<"After suffix increment value of a in obj2: "<<obj2.a<<endl;
    obj2 = ++obj1;
    cout<<"After prefix increment value of a in obj2: "<<obj2.a<<endl;
    obj1.setB(10);
    cout<<"Value of a in obj1:"<<obj1.a<<endl;
    cout<<"Value of b in obj1 after running  setB(10) function:"<<obj1.b<<endl;
    obj2 = obj1--;
    cout<<"After suffix decrement value of b is: "<<obj2.b<<endl;
    cout<<"After suffix decrement value of a is: "<<obj2.a<<endl;
    obj2 = --obj1;
    cout<<"After prefix decrement value of b is: "<<obj2.b<<endl;
    cout<<"After prefix decrement value of a is: "<<obj2.a<<endl;
    return 0;
}

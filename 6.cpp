// BINARY INCREMENT WITHOUT USE OF CONSTRUCTOR
#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void setter(int n1, int n2){
        a = n1;
        b = n2;
    }
    A operator + (A obj2){
        A tempobj;
        tempobj.a = a + obj2.a;
        tempobj.b = b + obj2.b;
        return tempobj;
    }
};
int main (){
    A obj1,obj2,obj3;
    obj1.setter(1000,2000);
    obj2.setter(10,20);
    obj3 = obj1+obj2;
    cout<<"After sum of 2 objects value of a is:"<<obj3.a<<endl;
    cout<<"After sum of 2 objects value of b is:"<<obj3.b<<endl;
    return 0;
}

// BINARY INCREMENT WITH USE OF CONSTRUCTOR
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a,b;
//     A(int n1=0, int n2=0){
//         a = n1;
//         b = n2;
//     }
//     A operator + (A &obj2){
//         A tempobj;
//         tempobj.a = a + obj2.a;
//         tempobj.b = b + obj2.b;
//         return tempobj;
//     }
// };
// int main (){
//     A obj1(1000,2000),obj2(10,20),obj3;
//     obj3 = obj1+obj2;
//     cout<<"After sum of 2 objects value of a is:"<<obj3.a<<endl;
//     cout<<"After sum of 2 objects value of b is:"<<obj3.b<<endl;
//     return 0;
// }

// BINARY DECREMENT WITHOUT USE OF CONSTRUCTOR
#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    void setter(int n1, int n2){
        a = n1;
        b = n2;
    }
    A operator + (A obj2){ // Sign used after operator keyword will not effect the function
        A tempobj;
        tempobj.a = a - obj2.a;
        tempobj.b = b - obj2.b;
        return tempobj;
    }
};
int main (){
    A obj1,obj2,obj3;
    obj1.setter(1000,2000);
    obj2.setter(10,20);
    obj3 = obj1+obj2;
    cout<<"After substraction of 2 objects value of a is:"<<obj3.a<<endl;
    cout<<"After substraction of 2 objects value of b is:"<<obj3.b<<endl;
    return 0;
}

// BINARY DECREMENT WITH USE OF CONSTRUCTOR
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a,b;
//     A(int n1=0, int n2=0){
//         a = n1;
//         b = n2;
//     }
//     A operator + (A &obj2){
//         A tempobj;
//         tempobj.a = a - obj2.a;
//         tempobj.b = b - obj2.b;
//         return tempobj;
//     }
// };
// int main (){
//     A obj1(1000,2000),obj2(10,20),obj3;
//     obj3 = obj1+obj2;
//     cout<<"After substraction of 2 objects value of a is:"<<obj3.a<<endl;
//     cout<<"After substraction of 2 objects value of b is:"<<obj3.b<<endl;
//     return 0;
// }

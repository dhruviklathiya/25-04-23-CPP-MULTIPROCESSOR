#include<iostream>
#include<string.h>
using namespace std;
class class1{
	public:
		void get(int a){
			cout<<"class 1 : "<<a<<endl;
		}
};
class class2 : public class1{
	public:
		void get(int b){
			cout<<"class 2 : "<<b<<endl;
		}
};
int main(){
	class2 obj;
	obj.class1::get(132);
	obj.get(2323);
	return 0;
}
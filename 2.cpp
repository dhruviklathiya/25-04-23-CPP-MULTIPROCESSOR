#include<iostream>
#include<string.h>
using namespace std;
class same{
	public:
		void get(int a){
			cout<<"get 1 : "<<a<<endl;
		}
		void get(float b){
			cout<<"get 2 : "<<b<<endl;
		}
		void get(int a,int b){
			cout<<"get 3 : "<<a*b<<endl;
		}
};
int main(){
	same obj;
	obj.get(6);
	obj.get(9.00f);
	obj.get(67,89);
	return 0;
}
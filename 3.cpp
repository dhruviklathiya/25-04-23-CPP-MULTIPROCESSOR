#include<iostream>
#include<string.h>
using namespace std;
class ClassUser{
	private:
		int a;
	public:
		void set(int a1){
			a=a1;
		}
		void get(){
		 cout<<a<<endl;
		}
	ClassUser operator ++ (int){
		ClassUser ans;
		 ans.a=a++;
		 return ans;
	}
	ClassUser operator -- (int){
		ClassUser ans;
		 ans.a=a--;
		 return ans;
	}
};
int main(){
	ClassUser obj1,obj2,obj3;
	obj1.set(63);
	obj1.get();
	obj2 = obj1++;
	obj2.get();
	obj3 = obj1--;
	obj3.get();
}
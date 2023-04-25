#include <iostream>
using namespace std;
class Parent {
public:
    Parent() {}
};
class child : public Parent {
public:
    float calculate(int a, int b) {
        return a / b;
    }
    int calculate(int a, int b, int c) {
        return a - b - c;
    }
    int calculate(int a, int b, int c, int d) {
        return a * b * c * d;
    }
    int calculate(int a, int b, int c, int d, int e) {
        return a + b + c + d + e;
    }
};
int main() {
    child obj;
    cout << "Division: " << obj.calculate(10, 2) << endl;
    cout << "Subtraction: " << obj.calculate(12, 3, 1) << endl;
    cout << "Multiplication: " << obj.calculate(1, 2, 3, 4) << endl;
    cout << "Addition: " << obj.calculate(1, 2, 3, 4, 5) << endl;
    return 0;
}

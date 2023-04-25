#include <iostream>
using namespace std;

class Counter {
private:
    int count; 

public:
    Counter(int initialCount = 0) : count(initialCount) {}

    Counter operator+(int value) {
        return Counter(count + value);
    }

    Counter operator-(int value) {
        return Counter(count - value);
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(5);
    Counter c2 = c1 + 10; 
    Counter c3 = c2 - 3;  

    cout << "Original Count: ";
    c1.display();

    cout << "Count after increment: ";
    c2.display();

    cout << "Count after decrement: ";
    c3.display();

    return 0;
}

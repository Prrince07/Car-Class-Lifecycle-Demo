#include <iostream>
using namespace std;

class Car {
public:
    Car() {
        cout << "modified the car !" << endl;
    }

    ~Car() {
        cout << "Driving the car... " << endl;
    }

    void testing() {
        cout << "testing the car !" << endl;
    }
};

int main() {
    Car myCar;
    myCar.testing();
    return 0;
}

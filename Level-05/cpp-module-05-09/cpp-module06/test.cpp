#include <typeinfo>
#include <iostream>
using namespace std;
class salmi{int a;double b;};
int main() {
    salmi a;
    float b = 3.2f;
    int r = 5;
    char d = 1;
    double e = 5.00;

    cout << typeid(salmi) << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(e).name() << endl;

}
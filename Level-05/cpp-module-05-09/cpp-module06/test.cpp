#include <typeinfo>
#include <iostream>
#include <iomanip>
using namespace std;
class salmi{int a;double b;};
int main() {
double d = -167777555555555.0;

float f = static_cast<float>(d);
int i = static_cast<int>(d);
std::cout << "d: " << std::setprecision(1) << std::fixed << d << std::endl;
std::cout << "f: " << std::setprecision(1) << std::fixed << f << std::endl;
std::cout << "i: " << i << std::endl;
std::cout << "i == f: " << (i == f) << std::endl;
}
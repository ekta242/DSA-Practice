
#include <iostream>
using namespace std;

void method1() {
    int a = 10, b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
  
    cout << a << " " << b << endl;
    return 0;
}
void method2() {
    int a = 10, b = 20;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    
    cout << a << " " << b << endl;
    return 0;
}

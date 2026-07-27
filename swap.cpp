
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
void method3() {
    int a = 10, b = 20;
  
    
    int temp = a;
    a = b;
    b = temp;
  
    cout << a << " " << b << endl;
    return 0;
}
int main() {
    method1();
    method2();
    method3();
    return 0;
}
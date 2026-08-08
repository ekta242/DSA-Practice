#include<bits/stdc++.h>
using namespace std;    
void printPattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void printPattern2(int n){
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i+1;j++){
            cout<<"* ";
        }
    }
}

int main() {
    int n;
    cin >> n;
    printPattern1(n);
    return 0;
}
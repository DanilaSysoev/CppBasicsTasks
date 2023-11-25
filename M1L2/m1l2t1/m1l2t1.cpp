#include<iostream>

using namespace std;

int main() {
    int code;
    cout << "Enter your personal code:\n";
    cin >> code;
    cout << "Your answer:\n" << 31 * code + code % 997;    
    return 0;
}
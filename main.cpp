#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    
    int num = n;  // Store the original number
    
    while(n > 0) {
        int lastdigit = n % 10;
        n = n / 10;  // Use n for processing, not num
    }
    
    cout << "Original number: " << num << endl;
    return 0;
}

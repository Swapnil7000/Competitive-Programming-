/*
 ============================================================================
 Name        : Smart Number
 Author      : Deepak Choudhary
 Description : A number is called a smart number if it has an odd number of factors. 
               Given some numbers, find whether they are smart numbers or not.
 ============================================================================
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(val * val == num)
        return true;
    return false;
}

int main() {
    
    int test_cases;
    cin >> test_cases;
    int num;
    for(int i = 0; i < test_cases; i++) {
        cin >> num;
        bool ans = is_smart_number(num);
        if(ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
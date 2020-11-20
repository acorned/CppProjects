#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// This is to solve https://www.hackerrank.com/challenges/variable-sized-arrays/
int main() {
    int n, q;
    cin >> n >> q;
    int** a = new int* [n];  
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        int* arr = new int [k];
        for (int j = 0; j < k; j++) {
            cin >> arr[j];
        }        
        *(a+i)=arr;
    }
    int i_, j_;
    for (int i = 0; i < q; i++) {
        cin >> i_ >> j_;
        cout << *(a[i_] + j_) << "\n"; 
    }
    return 0;
}

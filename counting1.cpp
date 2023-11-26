#include <bits/stdc++.h>
using namespace std;

int print(int n){
    // base case
    if(n == 0){
        return 0;
    }

    //recursive relation
    print(n-1);             // print after return 
    cout << n << endl;   // 1 2 3 4 5 ... 
}

int main(){
    int n;
    cin >> n;
    cout << endl;

    print(n);
    return 0;
}
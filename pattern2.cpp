// MANMOHAN LOVES PATTERNS - I
// Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.

// 1
// 11
// 111
// 1001
// 11111
// 100001

// Input Format:
// Single number N.

// Constraints:
// N<=1000

// Output Format
// Pattern corresponding to N.

// Sample Input
// 6
// Sample Output
// 1 
// 11
// 111 
// 1001 
// 11111
// 100001
#include<iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
    }
    if(n==2){
        cout << 1 << endl;
        cout << 11 << endl;
    }
    if(n==3){
        cout << 1 << endl;
        cout << 11 << endl;
        cout << 111 << endl;
    }
    if(n>3){
        for(int i=1;i<=3;i++){
            for(int j=1;j<=i;j++){
                cout << 1;
            }
            cout << endl;
        }
        for(int i=4;i<=n;i++){
            if(i%2==0){
                for(int j=1;j<=i-1;j++){
                    if(j==1){
                        cout << 1;
                    }
                    else{
                        cout << 0;
                    }
            }
            }
            else{
                for(int j=1;j<=i-1;j++){
                    cout << 1;
                }
            }    
            
            cout << 1;
            cout << endl;
        }
    }
	return 0;
}
// MANMOHAN LOVES PATTERNS- II
// Help Manmohan to print pattern of a given number. See the output pattern for given input n = 5.

// Input Format:
// Single integer N denoting number of lines of the pattern.

// Constraints:
// N<=1000

// Output Format
// Pattern.

// Sample Input
// 5
// Sample Output
// 1
// 11
// 202
// 3003
// 40004
#include<iostream>
using namespace std;
int main(){
    int n,val=2,ld=2;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
    }
    if(n==2){
        cout << 1 << endl;
        cout << 11 << endl;
    }
    if(n>2){
        cout << 1 << endl;
        cout << 11 << endl;
        for(int i=3;i<=n;i++){
            for(int j=1;j<=i-1;j++){
                if(j==1){
                    cout << val;
                    val++;
                }
                else{
                    cout << 0;
                }
            }
            cout << ld;
            ld++;
            cout << endl;
        }
    }
}
// FIBONACCI PATTERN (PATTERN 4)
// Take N (number of rows), print the following pattern (for N = 4)
// 0
// 1 1
// 2 3 5
// 8 13 21 34

// Input Format:
// Constraints:
// 0 < N < 100

// Output Format
// Sample Input
// 4
// Sample Output
// 0 
// 1    1 
// 2    3     5 
// 8   13    21    34
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
	int a=0,b=1,c=2;
    if(n==1){
        cout << "0" << endl;
    }
    if(n==2){
        cout << "0" << endl;
        cout << "1" << "\t" << "1" << endl;
    }
    if(n>2){
        cout << "0" << endl;
        cout << "1" << "\t" << "1" << endl;
        for(int i=3;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout << c << "\t";
                a=b;
                b=c;
                c=a+b;
            }
            cout << endl;
        }
    }
}
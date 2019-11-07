// PATTERN MOUNTAIN
// Take N (number of rows), print the following pattern (for N = 4).
//                        1           1
//                        1 2       2 1  
//                        1 2 3   3 2 1
//                        1 2 3 4 3 2 1 
// Input Format:
// Constraints:
// 0 < N < 10

// Output Format
// Sample Input
// 4
// Sample Output
// 1						1
// 1	2				2	1
// 1	2	3		3	2	1
// 1	2	3	4	3	2	1
#include<iostream>
using namespace std;
int main() {
	int n;
    cin >> n;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j << "\t";
        }
        for(int k=1;k<=1+(n-i-1)*2;k++){
            cout << " " << "\t";
        }
        for(int l=i;l>=1;l--){
            cout << l << "\t";
        }
        cout << endl;
    }
    for(int i=1;i<n;i++){
        cout << i << "\t";
    }
    cout << n << "\t";
    for(int i=n-1;i>=1;i--){
        cout << i << "\t";
    }
}
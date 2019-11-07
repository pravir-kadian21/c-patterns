// ATTERN WITH ZEROS
// Take N (number of rows), print the following pattern (for N = 5)
// 1
// 2 2
// 3 0 3
// 4 0 0 4
// 5 0 0 0 5

// Input Format:
// Constraints:
// 0 < N < 100

// Output Format
// Sample Input
// 5
// Sample Output
// 1  
// 2	2  
// 3	0	3    
// 4	0	0	4  
// 5	0	0	0	5
#include<iostream>
using namespace std;
int main() {
    int n,val=3;
    cin >> n;
    if(n==1){
        cout << 1 << endl;
    }
    if(n==2){
        cout << 1 << endl;
        cout << 2 << " " << 2 << endl;
    }
    if(n>=3){
        cout << 1 << endl;
        cout << 2 << " " << 2 << endl;
        for(int i=3;i<=n;i++){
            for(int j=1;j<=i-1;j++){
                if(j==1){
                    cout << val << " ";
                }
                else{
                    cout << 0 << " ";
                }
            }
            cout << val;
            val++;
            cout << endl;
        }
    }
	return 0;
}
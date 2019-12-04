// PATTERN NUMBERS & STARS - 1
// Take as input N, a number. Print the pattern as given in output section for corresponding input.

// Input Format:
// Enter value of N

// Constraints:
// Output Format
// All numbers and stars are Space separated

// Sample Input
// 5
// Sample Output
// 1 2 3 4 5
// 1 2 3 4 * 
// 1 2 3 * * *
// 1 2 * * * * *
// 1 * * * * * * *
#include<iostream>
using namespace std;
int main() {
    int n,val=1;
    cin >> n;
    for(int rows=1;rows<=n;rows++){
        for(int col=n;col>=rows;col--){
            cout << val << " ";
            val++;
        }
        val=1;
        if(rows!=1){
            for(int str=1;str<=2*rows-3;str++){
                cout << "*" << " ";
            }
        }
        cout << endl;
    }
	return 0;
}
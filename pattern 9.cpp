// 卐 GANESHA'S PATTERN
// Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *
// Input Format:
// Enter value of N ( >=5 )

// Constraints:
// N >= 5

// Output Format
// Sample Input
// 7
// Sample Output
// *  ****
// *  *
// *  *
// *******
//    *  *
//    *  *
// ****  *
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=(n-1)/2;i++){
        if(i==1){
            for(int j=1;j<=n;j++){
                if(j==1){
                    cout << "*";
                }
                if(j>1 && j<(n+1)/2){
                    cout << " ";
                }
                if(j>=(n+1)/2){
                    cout << "*";
                }
            }
            cout << endl;
        }
        if(i>1){
            for(int j=1;j<=n;j++){
                if(j==1){
                    cout << "*";
                }
                if(j==(n+1)/2){
                    cout << "*";
                }
                if(j>1 && j<(n+1)/2){
                    cout << " ";
                }
                if(j>(n+1)/2){
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    for(int i=1;i<=n;i++){
        cout << "*";
    }
    cout << endl;

    for(int i=1;i<=(n-1)/2;i++){
        if(i!=(n-1)/2){
            for(int j=1;j<=n;j++){
                if(j<(n+1)/2){
                    cout << " ";
                }
                if(j==(n+1)/2){
                    cout << "*";
                }
                if(j>(n+1)/2 && j<n){
                    cout << " ";
                }
                if(j==n){
                    cout << "*";
                }
            }
            cout << endl;
        }
        if(i==(n-1)/2){
            for(int j=1;j<=n;j++){
                if(j<=(n+1)/2){
                    cout << "*";
                }
                if(j>(n+1)/2 && j<n){
                    cout << " ";
                }
                if(j==n){
                    cout << "*";
                }
            }
            cout << endl;
        }
    }
	return 0;
}
// PASCAL TRIANGLE 1
// Given an integer N, print Pascal Triangle upto N rows. 

// Input Format:
// Single integer N.

// Constraints:
// N <= 10

// Output Format
// Print pascal triangle.

// Sample Input
// 4
// Sample Output
//            1
//          1   1
//        1   2   1
//      1   3   3   1
#include<iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int a[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j==0||j==i){
                a[i][j]=1;
            }
            else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}
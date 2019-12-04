// PATTERN DOUBLESIDEDARROW
// Take N as input. For a value of N=7, we wish to draw the following pattern :

//                             1 
//                         2 1   1 2 
//                     3 2 1       1 2 3 
//                 4 3 2 1           1 2 3 4 
//                     3 2 1       1 2 3 
//                         2 1   1 2 
//                             1 
// Input Format:
// Take N as input.

// Constraints:
// N is odd number.

// Output Format
// Pattern should be printed with a space between every two values.

// Sample Input
// 7
// Sample Output
//             1 
//         2 1   1 2 
//     3 2 1       1 2 3 
// 4 3 2 1           1 2 3 4 
//     3 2 1       1 2 3 
//         2 1   1 2 
//             1 
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	if(n!=1){
		for(int i=1;i<=(n-1)/2;i++){
			for(int j=1;j<=n-2*i+1;j++){
				cout << "\t";
			}
			for(int k=i;k>=1;k--){
				cout << k << "\t";
			}
			if(i!=1){
				for(int p=1;p<=2*i-3;p++){
					cout << "\t";
				}
			}
			if(i!=1){
				for(int r=1;r<=i;r++){
					cout << r << "\t";
				}
			}
			cout << endl;
		}
		for(int i=(n+1)/2;i>=1;i--){
			cout << i << "\t";
		}
		for(int i=1;i<=n-2;i++){
			cout << "\t";
		}
		for(int i=1;i<=(n+1)/2;i++){
			cout << i << "\t";
		}
		cout << endl;
		for(int i=(n-1)/2;i>=1;i--){
			for(int j=n-2*i+1;j>=1;j--){
				cout << "\t";
			}
			for(int j=i;j>=1;j--){
				cout << j << "\t";
			}
			if(i!=1){
				for(int k=1;k<=2*i-3;k++){
					cout << "\t";
				}
			}
			if(i!=1){
				for(int l=1;l<=i;l++){
					cout << l << "\t";
				}
			}
			cout << endl;
		}
	}
	if(n==1){
		cout << 1;
	}
	return 0;
}
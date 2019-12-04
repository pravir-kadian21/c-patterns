// PATTERN INVERTEDHOURGLASS
// Take N as input. For a value of N=5, we wish to draw the following pattern :
//              5                   5 
//              5 4               4 5 
//              5 4 3           3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2 1 0 1 2 3 4 5 
//              5 4 3 2 1   1 2 3 4 5 
//              5 4 3 2       2 3 4 5 
//              5 4 3           3 4 5 
//              5 4               4 5 
//              5                   5 
// Input Format:
// Take N as input.

// Constraints:
// Output Format
// Pattern should be printed with a space between every two values.

// Sample Input
// 5
// Sample Output
// 5                   5 
// 5 4               4 5 
// 5 4 3           3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2 1 0 1 2 3 4 5 
// 5 4 3 2 1   1 2 3 4 5 
// 5 4 3 2       2 3 4 5 
// 5 4 3           3 4 5 
// 5 4               4 5 
// 5                   5 
#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	for(int i=n;i>=1;i--){
		int count =n;
		for(int j=i;j<=n;j++){
			cout << count << "\t";
			count--;
		}
		for(int k=(2*i-1);k>=1;k--){
            cout << "\t";
        }
        for(int l=i;l<=n;l++){
            cout << l << "\t";
        }
        cout << endl;
	}
    int count1=n;
    for(int i=1;i<=n;i++){
        cout << count1 << "\t";
        count1 = count1-1;
    }
    cout << "0" << "\t";
    for(int i=1;i<=n;i++){
        cout << i << "\t";
    }
    cout << endl;

    for(int i=1;i<=n;i++){
        int count2=n;
        for(int j=1;j<=n+1-i;j++){
            cout << count2 << "\t";
            count2--;
        }
        for(int k=(2*i-1);k>=1;k--){
            cout << "\t";
        }
        for(int l=i;l<=n;l++){
            cout << l << "\t";
        }
        cout << endl;
    }
}
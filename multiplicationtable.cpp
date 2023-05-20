#include <bits/stdc++.h>
using namespace std;

int main() { 
   cout << "Please enter the size of the multiplication table: ";
   int n;
   cin >> n;
   int m[n][n];
    for (int i = 0; i<=n; i++){
        for (int j = 0; j<=n; j++){
            m[i][j] = i*j;
            cout << m[i][j] << " ";
    
    }
   
    cout << endl;
}
return 1;
}
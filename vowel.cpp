#include <bits/stdc++.h>
using namespace std;

int main(){
cout << "Please enter your word: ";
char msg[100];
cin >> msg;
int count = 0;

for (int i = 0; msg[i]; i++){
    if(msg[i] == 'a' || msg[i] == 'e' ||msg[i] == 'i' || msg[i] == 'o'||msg[i] == 'u' ){
    count++;
}
}
cout << "The number of vowels is: " << count;
}


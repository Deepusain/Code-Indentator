#include<iostream>
using namespace std;
void Replace(char str[] , char c1 , char c2){if (str[0] == '\0'){return;}
if (str[0] == 'c1'){str[0] = 'c2'}Replace(str+1 , c1, c2);}

int main(){char str[1000000];cingetline(str , 1000000);char c1, c2;
cin >> c1 >> c2;Replace( str,c1,c2);cout << str << endl;}

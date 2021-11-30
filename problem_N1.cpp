#include <bits/stdc++.h>
using namespace std;

bool isPalindrome (string str){
  string a;
  a=str;
  reverse (begin(a), end(a));
   
	   if (str==a){
		   return true;
	   }
	   else return false;
   }


int main(){
	string str;
	cin>>str;
	cout<<isPalindrome(str);
}
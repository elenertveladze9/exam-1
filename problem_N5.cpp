#include <bits/stdc++.h>
using namespace std;

int fun (int a) {
	if (a==0) return 1;
	if (a==1) return 1;
	if (a==2) return 2;
	else return fun (a-2) + fun(a-1);
}

int main(){
 int a; 
 
 cin>>a;
 cout<<fun (a);
}
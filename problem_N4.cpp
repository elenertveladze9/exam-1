#include <bits/stdc++.h>
using namespace std;

bool isProperly (string str){
    stack <char> st;
    
      for (int i=0; i<str.size(); i++){
          if (st.empty()) {st.push(str[i]); continue;}
          if (str[i]=='(') st.push(str[i]);
          if (str[i]==')' && st.top()=='(') st.pop();
      }
        if (st.empty()) {
          return true;
      }
      
      if (str.size()%2==1) {
         return false; 
      } 
      return true;
}

int main() {
   string s;
   cin>>s;
   cout<<isProperly(s);
}
#include <bits/stdc++.h>
using namespace std; 

int fun (int arr[], int k) {
    
   sort(arr, arr+k);
   
   for(int i=0; i<k; i++){
	   if (arr[i+1]-arr[i]!=1){
		   return arr[i]+1;
		   break;
	   }
   }
}

int main(){
 int arr[] = {1, 2, 3, 4, 5, 6, 9, 10}; 
  int n=sizeof (arr)/sizeof (arr[0]);
  cout <<fun (arr, n);
}
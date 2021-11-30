#include <bits/stdc++.h>
using namespace std;

int minSplit(int coins[], int sizeOfArray, int val ){
	
	int tempArr[val+1];
	
        tempArr[0]=0;
	
		for (int i=1; i<=val; i++)
			tempArr[i]=sizeOfArray+1;
		

		for (int i=1; i<=val; i++) {
			for (int j=0; j<sizeOfArray; j++) {

				if (coins[j]<=i) {
					int x=tempArr[i-coins[j]];
					int MinSize=min(x,sizeOfArray);
					tempArr[i]=MinSize+1;
				}
			}
		}
		return tempArr[val];
}


int main(){
    int val;
	int coinsArr[] = {1,5,10,20,50};
	int sizeOfArray = sizeof(coinsArr)/sizeof(coinsArr[0]);

	cin>>val;
	cout<<minSplit(coinsArr, sizeOfArray, val);
}
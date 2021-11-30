#include <bits/stdc++.h>
using namespace std;

class DeletElement {
	vector <int> v;
	map <int, int> m;
	

   public:

	void remove(int k){
		
		if(m.find(k) == m.end()) 
		cout<<-1;
	
		int first = m.at(k);
		int last = v.size() - 1;
			
		m.erase(k);
		swap(v[first], v[last]);
		v.pop_back();
		
	}

	bool add(int k) {
		int value = v.size();
		v.push_back(k);
		m.insert(pair <int, int>(k, value));
	} 

	void display() {
		for (int i=0; i<v.size(); i++){
			cout<<v.at(i)<<endl;
		}
	}
};



int main(){

	DeletElement myClass;
	
	myClass.add(10);
	myClass.add(100);
	myClass.add(125);
	
	cout<<endl;
	
	myClass.remove(125);
	myClass.add(5);
	myClass.display();
}
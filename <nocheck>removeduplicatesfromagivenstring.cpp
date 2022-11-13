#include<bits/stdc++.h>
using namespace std;
string removeduplicatesstring (string s) {
	vector<int> x(26,0);
	string s1="";
	for(int i=0;i<s.size();i++) {
		x[s[i]-'a']++;
	}
	for(int i=0;i<s.size();i++) {
		if(x[s[i]-'a']!=0) {
			s1+=s[i];
			x[s[i]-'a']=0;
		}
	}
	return s1;
}
int main() {
	string a;
	cin >> a; 
	cout<< removeduplicatesstring(a);
}

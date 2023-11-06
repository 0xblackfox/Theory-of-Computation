#include<bits/stdc++.h>
using namespace std;

void q0(string,int);
void q1(string,int);
void q2(string,int);


void q0(string s,int i){
	if(i==s.size()){
		cout << "NO" << endl;
		return;
	}

	if(s[i] == 'A') q1(s,i+1);
	else q0(s,i+1);
}

void q1(string s,int i){
	if(i==s.size()){
		cout << "NO" << endl;
		return;
	}

	if(s[i] == 'A') q1(s,i+1);
	else q2(s,i+1);
}

void q2(string s,int i){
	if(i==s.size()){
		cout << "YES" << endl;
		return;
	}

	if(s[i] == 'A') q2(s,i+1);
	else q2(s,i+1);
}

int main(){
	string s;
	cin >> s;

	q0(s,0);
}
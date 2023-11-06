#include<bits/stdc++.h>

using namespace std;

void q1(string ,int );
void q2(string ,int );
void q3(string ,int );
void q4(string ,int);

void q1(string s,int i){
	if(i == s.length()){
		cout << "YES" << endl;
		return ; 
	}

	if(s[i] == 'A')
		q1(s,i+1);
	else
		q2(s,i+1);


}


void q2(string s,int i){
	if(i == s.length()){
		cout << "NO" << endl;
		return ; 
	}

	if(s[i] == 'A')
		q1(s,i+1);
	else
		q2(s,i+1);


}


void q3(string s,int i){
	if(i == s.length()){
		cout << "YES" << endl;
		return ; 
	}

	if(s[i] == 'A')
		q4(s,i+1);
	else
		q3(s,i+1);


}


void q4(string s,int i){
	if(i == s.length()){
		cout << "NO" << endl;
		return ; 
	}

	if(s[i] == 'A')
		q4(s,i+1);
	else
		q3(s,i+1);


}



void q0(string s,int i){
	if(i == s.length()){
		cout << "NO" << endl;
		return ; 
	}

	if(s[i] == 'A')
		q1(s,i+1);
	else
		q3(s,i+1);
}


int main(){
	string s;
	cin >> s;

	q0(s,0);
}
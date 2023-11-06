#include<bits/stdc++.h>
using namespace std;

string s, cfg[] = {"asa", "bsb", "epsilon"};
bool flag = false;
stack<string>sk;

string append(string _cfg, string newString) {

    string left = "", right = "";
    int i = 0;
    while (newString[i] != 's')left += newString[i++];
    i = newString.size() - 1;
    while (newString[i] != 's')right += newString[i--];
    newString = "";
    newString += left;
    if (_cfg != "epsilon")newString += _cfg;
    reverse(right.begin(), right.end());
    newString += right;

    return newString;
}
void find(string s, string newString) {
    if (s == newString) {
        flag = true;
        sk.push(newString);
        return;
    }
    if (s.size() < newString.size() - 1 || s.size() == newString.size())return;

    for (int i = 0; i < 3; i++) {
        string appended = append(cfg[i], newString);

        if (!flag)find(s, appended);
        else break;
    }
    if (flag)sk.push(newString);

}
int main()
{
    cin >> s;
    find(s, "s");
    while (!sk.empty()) {
        cout << sk.top();
        sk.pop();
        if (!sk.empty())cout << " --> ";
    }
    if (!flag)cout << "Not found.";
    cout << endl;

}



// baabbaab
// baaaab
// abbbba
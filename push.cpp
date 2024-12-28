#include <bits/stdc++.h>
#include <string>
using namespace std;
void run(string x) {
	cout<<x<<endl; system(x.c_str());
}
signed main() {
	freopen("commit.log", "r", stdin);
	string s; getline(cin, s);
	run("git add .");
	run("git commit -m \"" + s + "\"");
	run("git push");
}
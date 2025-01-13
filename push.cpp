#include <bits/stdc++.h>
using namespace std;
void run(string x) {
	cout<<x<<endl; system(x.c_str());
}
signed main(signed argc, char** argv) {
	freopen("commit.log", "r", stdin);
	string s; getline(cin, s);
	string t; if(argc > 1) t = argv[1];
	if(t != "p") run("git add ."), run("git commit -m \"" + s + "\"");
	if(t != "c") run("git push");
}
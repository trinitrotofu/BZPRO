#include <bits/stdc++.h>

using namespace std;

const string F_path="./www.lydsy.com/JudgeOnline/";

string pid, fname, str, title;

int main(int argc, char const* argv[])
{
	pid = argv[1], fname = F_path + pid + ".html";
	ifstream fin(fname.c_str());
	while (1)
	{
		getline(fin, str);
		if (str.substr(0, 14) == "<title>Problem") break;
	}
	while (str.substr(0, 5) != ". -- ") str.erase(str.begin());
	for (int i = 1; i <= 5; i += 1) str.erase(str.begin());
	while (str.substr(0, 8) != "</title>" && str.size() >= 8)
		title.push_back(str[0]), str.erase(str.begin());
	cout << title;
	if (str.substr(0, 8) != "</title>")
		while (!*str.begin() != '\n' && *str.begin() != '\r')
			putchar(*str.begin()), str.erase(str.begin());
	return 0;
}

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int nametoi(const string& name)
{
	int val {0};
	for (int i = 0; i < name.length(); i++)
		val += name[i] * (i + 1);

	return val;
}

int main(int argc, char *argv[])
{
	ifstream in("1837.test");

	string word;
	vector<string> names;

	while (in >> word)
		names.push_back(word);

	sort(names.begin(), names.end());

	vector<string>::iterator it;
	it = unique(names.begin(), names.end());

	names.resize(distance(names.begin(), it));

	for (int i = 0; i < names.size(); i++)
		cout << names[i] << ' ';
}

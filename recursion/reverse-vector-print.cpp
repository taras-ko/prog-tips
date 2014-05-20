#include <iostream>
#include <vector>

using namespace std;

void print_next(vector<char>& v)
{
	static int i;
	if (i != v.size()) {
		i++;
		print_next(v);
	}

	--i;
	cout << v[i];

	if (i == 0)
		cout << endl;
}

int main()
{
	vector<char> v {'H','e','l','l','o',' ','W','o','r','l','d','!'};
	print_next(v);
}

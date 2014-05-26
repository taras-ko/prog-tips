#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	string line, word;

	while (getline(cin, line)) {
		istringstream is(line);
		while (is >> word)
			;
	}

}

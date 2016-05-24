#include <iostream>
#include <map>
#include <iomanip>
#include <string>
using namespace std;
typedef long long ll;

//11507 - UVa

map<string, map<string, string>> DIR;

int main()
{
	//start x
	DIR["+x"]["+y"] = "+y";
	DIR["+x"]["-y"] = "-y";
	DIR["+x"]["+z"] = "+z";
	DIR["+x"]["-z"] = "-z";

	DIR["-x"]["+y"] = "-y";
	DIR["-x"]["-y"] = "+y";
	DIR["-x"]["+z"] = "-z";
	DIR["-x"]["-z"] = "+z";
	//end x

	//start y
	DIR["+y"]["+y"] = "-x";
	DIR["+y"]["-y"] = "+x";
	DIR["+y"]["+z"] = "+y";
	DIR["+y"]["-z"] = "+y";

	DIR["-y"]["+y"] = "+x";
	DIR["-y"]["-y"] = "-x";
	DIR["-y"]["+z"] = "-y";
	DIR["-y"]["-z"] = "-y";
	//end y
	
	//start z
	DIR["+z"]["+y"] = "+z";
	DIR["+z"]["-y"] = "+z";
	DIR["+z"]["+z"] = "-x";
	DIR["+z"]["-z"] = "+x";

	DIR["-z"]["+y"] = "-z";
	DIR["-z"]["-y"] = "-z";
	DIR["-z"]["+z"] = "+x";
	DIR["-z"]["-z"] = "-x";
	//end z
	ll l;
	cin >> l;
	string cDIR = "+x", input;
	while (l)
	{
		while (--l)
		{
			cin >> input;
			if (input != "No")
				cDIR = DIR[cDIR][input];
		}
		cout << cDIR << endl;
		cin >> l;
		cDIR = "+x";
	}
}
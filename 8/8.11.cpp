#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

struct PersonInfo
{
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	ofstream output("../data/8_11.txt");
	
	istringstream record;
	
	while(getline(cin, line))
	{
		PersonInfo temp;
		record.clear();
		record.str(line);
		record>>temp.name;
		output<<temp.name<<" ";
		while(record>>word)
		{
			temp.phones.push_back(word);
			output<<word<<" ";			
		}
		people.push_back(temp);
		output<<endl;
	}
	
	return 0;
}

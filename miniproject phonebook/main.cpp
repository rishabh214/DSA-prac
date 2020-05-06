#include <iostream>
#include <iterator>
#include <map>
#include <string>
#include<bits/stdc++.h>

using namespace std;

map<string,long long > gquiz1;

void  Contacts()
{
	gquiz1.insert(pair<string, long long>("abc", 9917102223));
	gquiz1.insert(pair<string, long long>("abcd", 9917102123));
	gquiz1.insert(pair<string, long long>("efc", 9917102213));
	gquiz1.insert(pair<string, long long>("ers", 9917102243));
	gquiz1.insert(pair<string, long long>("fefc", 9917102233));
	gquiz1.insert(pair<string, long long>("errs", 9917102343));
	gquiz1.insert(pair<string, long long>("abcgu", 9917402343));
	gquiz1.insert(pair<string, long long>("errhs", 9917202343));
	gquiz1.insert(pair<string, long long>("erhsd", 9917262343));


	cout << endl;
}

void Display()
{
    map<string, long long>::iterator itr;
	cout << "\nThe map gquiz1 is : \n";
	cout << "\tKEY\tELEMENT\n";
	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
}

int main()
{
    Contacts();

    string name;

    cout<<"enter your search"<<endl;
    cin>>name;

    if (gquiz1.find(name)!=gquiz1.end())
    {
        cout<<"contact found: ";
        cout<<gquiz1.find(name)->second;
    }
    else if(gquiz1.find(name)==gquiz1.end() )
    {
        cout <<"trie implementation"<<endl;
        //trie(name);
    }
}

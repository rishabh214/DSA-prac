//#include <iostream>
//#include <iterator>
//#include <map>
//#include <string>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//map<string,string > gquiz1;
//
//void  Contacts()
//{
//	gquiz1.insert(pair<string,string>("abc", "9917102223"));
//	gquiz1.insert(pair<string, string>("abcd","9917102123"));
//	gquiz1.insert(pair<string, string >("efc", "9917102213"));
//	gquiz1.insert(pair<string, string >("ers", "9917102243"));
//	gquiz1.insert(pair<string, string >("fefc", "9917102233"));
//	gquiz1.insert(pair<string, string >("errs", "9917102343"));
//	gquiz1.insert(pair<string, string >("abcgu", "9917402343"));
//	gquiz1.insert(pair<string, string >("errhs", "9917202343"));
//	gquiz1.insert(pair<string, string >("erhsd", "9917262343"));
//	cout << endl;
//}
//void Insert_map(string name,string ph_num)
//{
//    gquiz1.insert(pair<string,string>(name,ph_num));
//}
//
//void Display()
//{
//    map<string, string>::iterator itr;
//	cout << "\nThe map gquiz1 is : \n";
//	cout << "\tKEY\tELEMENT\n";
//	for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) {
//		cout << '\t' << itr->first
//			<< '\t' << itr->second << '\n';
//	}
//}
//void Enter()
//{
//    string name;
//    cout<<"enter name"<<endl;
//    cin>>name;
//
//    if (gquiz1.find(name)!=gquiz1.end())
//    {
//        cout<<"contact already exists"<<endl;
//        cout<<gquiz1.find(name)->second;
//
//
//    }
//    else if(gquiz1.find(name)==gquiz1.end() )
//    {
//        string ph_num;
//        cout<<"enter Number"<<endl;
//        cin>>ph_num;
//        Insert_map(name,ph_num);
//        Display();
//    }
//}
//void Search()
//{
//    string name;
//    cout<<"enter name"<<endl;
//    cin>>name;
//
//    if (gquiz1.find(name)!=gquiz1.end())
//    {
//        cout<<"contact Found"<<endl;
//        cout<<gquiz1.find(name)->second;
//    }
//    else if(gquiz1.find(name)==gquiz1.end() )
//    {
//        cout<<"trie";
//    }
//}
//int main()
//{
//    Contacts();
//    char ans;
//    cout<< "Do you want to enter or search a contact[e/s]"<<endl;
//    cin>>ans;
//
//    if (ans=='e' || ans =='E')
//    {
//        Enter();
//    }
//    else if(ans=='s' || ans =='S')
//    {
//        Search();
//    }
//    else
//        cout<<"invalid input"<<endl;
//
//}


//*****************************************
//********RUN THESE FILES ON REPLIT********

#include<iostream>
// #include<bits/stdc++.h> 
// #include<map>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
    // map<string,string> myDictionary;
    unordered_map<string,string> myDictionary;
    myDictionary.insert(pair<string, string>("strawberry","die erdberre"));
    myDictionary.insert(pair<string, string>("orange","die Apfelsine"));
    myDictionary.insert(pair<string, string>("apple","der apfel"));
    myDictionary.insert(pair<string, string>("banana","die Banana"));

    myDictionary["strawberry"] = "Die erdberre";    
    myDictionary.erase("apple");
    cout << myDictionary.size()<< endl;

    for(auto pair : myDictionary)
        cout << pair.first << " - "<< pair.second << endl;

    // myDictionary.clear();
    for(auto pair : myDictionary)
        cout << pair.first << " - "<< pair.second << endl;
    
}
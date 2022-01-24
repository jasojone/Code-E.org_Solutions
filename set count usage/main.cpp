#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    string input;
    vector<string> names;
    set<string> nameSet;
    
    // while (cin >> input)
    // names.push_back(input);
    for (int i = 0; i < n; i++){
        cin >> input;
        names.push_back(input);
    }
    
    for (int i = 0; i < n; i++){
        if (nameSet.count(names[i]) !=0)
        cout << "YES" << endl;
        else 
        cout << "NO" << endl;
        nameSet.insert(names[i]);
    }
	return 0;
}
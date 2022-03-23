#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void STLsets(){

    set<int> S;
    S.insert(0);
    S.insert(5);
    S.insert(2);
    S.insert(7);
    S.insert(3);

    for(int x:S){
        cout<<x<<" ";
    }

    auto it = S.find(5);
    if (it == S.end())
    {
        cout<<"Element not present.";
    }
    else
    {
        cout<<"Element present ";
        cout<< *it<< "\n";
    }
    auto it2 = S.lower_bound(0);
    auto it3 = S.upper_bound(5);

    cout<< *it2 << " " << *it3 << "\n";

    auto it4 = S.upper_bound(7);
    if (it4 == S.end())
    {
        cout<<"Element not present.";
    }

}

int main(){
    
    STLsets();
    
    return 0;
}
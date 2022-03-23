#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// define comparator function
bool f(int x, int y){
    return x>y;
}
void STLvector(){

    // creating a Vector 'A'.
    vector<int> A = {1,2,5,4};

    // accessing vector elements.
    cout<<A[3]<<"\n"; // 4

    // sorting in increasing order.
    sort(A.begin(), A.end());
    for(int n:A){
        cout<<n<<" "; // 1,2,4,5
    }
    cout<<"\n";
    // performing binary search
    bool isPresent = binary_search(A.begin(), A.end(),4); //true
    isPresent = binary_search(A.begin(), A.end(), 100); //false

    // adding a element in vector.
    A.push_back(100); // 1,2,4,5,100.

    isPresent = binary_search(A.begin(), A.end(), 100); //true

    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(200);
    // 1,2,4,5,100,100,100,100,100,100,200

    // finding first of an element.
    vector<int>::iterator first = lower_bound(A.begin(), A.end(), 100);

    // above statement can also be written as:
    // auto first = lower_bound(A.begin(), A.end(), 100);

     // finding last occurence of an element.
    vector<int>::iterator last = upper_bound(A.begin(), A.end(), 100); //it points to the element next to the given element

    cout << *first<<" "<<*last<<"\n"; // 100 200
    cout<< last - first<<"\n"; //6

    // sort in reverse order,f is a comparator function.
    sort(A.begin(),A.end(),f);

    // printing reverse vector.
    for(int x: A){
        cout<<x<<" ";
    }

    // another way to reverse a vector.
    sort(A.begin(), A.end(), greater<int>());


    /*some basic modifiers.*/
    // insert elements in the back.
    A.push_back(10);
    // remove the element from the end.
    A.pop_back();
    // insert at the beginning 
    A.insert(A.begin(), 0);
    // removes the first element
    A.erase(A.begin());
}

int main(){
    
    STLvector();
    
    return 0;
}
/*
What is Set:
    # STL container used to store unique elements
    # Values are stored in ordered manner, either in increasing order or in decreasing order.
    # NO indexing.
    # Elements are identified by their own values.
    # Once value is inserted into the set, The values can not be modified.
    # Implemeted using Binary Search Tree (Red Black Tree).

Advantages of SET:
    # Unique values.
    # Ordered.
    # Dynamic Size.
    # No overflowing error because of dynamic size.
    # Insertion, deletion and searching are of O(log n) complexity

Disadvanges of SET:
    # Cannot acces elements using indexing.
    # More memory than of array.
    # Not suitable for large data sets.

Declarations of SET:
    #include< set>
    set<data_type> set_name = { }
    # By default values are stored in increasing order.

    #For set to be stored in decreasing order
    set<data_type, greater<data_type> > set_name;

Inserting elements into a set:
    set_name.insert(value); // insert time complexity O(log n).
    # returns an iterator to the inserted value.

    Iterator:
        set_name.begin() => iterator pointing to the first element of set.
        set_name.end() => iterator pointing after the last element of the set.
Delete elements from a set:
    set_name.delete(value);
*/
#include <bits/stdc++.h>
void display(std::set<int>& set1){
    for(auto it: set1){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
}
int main(){
    std::set<int> set1 = {1,2,3,4,5,6};
    //Insertion in a Set
    set1.insert(8);
    set1.insert(7);
    //Traversal in a Set
    std::cout<<set1.size()<<std::endl;
    //
    std::set<int>::iterator itr;
    for(itr = set1.begin(); itr != set1.end(); itr++){
        std::cout<<*itr<<" ";
    }
    std::cout<<std::endl;
    for(auto it: set1){
        std::cout<<it<<" ";
    }
    std::cout<<std::endl;
    //Deletion in a Set
    set1.erase(set1.begin(), set1.end());
    display(set1);
}
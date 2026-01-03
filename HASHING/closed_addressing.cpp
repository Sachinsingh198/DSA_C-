//Question: Implementat hash table using closed addressing mode
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
class Hashing{
    private:
    public:
        std::vector<std::list<int> > hashtable;
        int buckets;
        Hashing(int size): buckets(size) {
            hashtable.resize(size);
        }

        int hashvalue(int key){
            return key % buckets;//division method for the hash function
        }

        void add(int key){
            int idx = hashvalue(key);
            hashtable[idx].push_back(key);
        }

        std::list<int> :: iterator search(int key){
            int idx = hashvalue(key);
            return find(hashtable[idx].begin(), hashtable[idx].end(), key);
        }

        void deletKey(int key){
            int idx = hashvalue(key);
            if(search(key) != hashtable[idx].end()){//key is present
            hashtable[idx].erase(search(key));
            std::cout<<key<<" is deleted"<<std::endl;
            }
            else{
                std::cout<<key<<" is not present in the hash table."<<std::endl;
            }
        }
};
int main(){
    Hashing h(10);
    h.add(23);
    h.add(2);
    h.add(256);
    h.add(34);
    h.deletKey(23);
    h.deletKey(233);

}
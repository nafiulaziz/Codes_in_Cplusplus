#include <iostream>
#include <list>
#include <cstring>

using namespace std;

class HashTable{
    private:
        static const int hashGroups = 10;
        list<pair<int, string>> table[hashGroups];
        
    public:
        bool isEmpty() const;
        int hashFunction(int key);
        void insertItem(int key, string val);
        void removeItem(int key);
        string searchTab(int key);
        void printTab();
        
};

bool HashTable::isEmpty() const {
    int sum{};
    for (int i {}; i < hashGroups; i++)
        sum += table[i].size();
    
    if(!sum)
        return true;
    
    return false;
}

int HashTable::hashFunction(int key){
    return key % hashGroups;
}

void HashTable::insertItem(int key, string val){
    int hashVal = hashFunction(key);
    auto& cell =table[hashVal];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(; bItr != end(cell); bItr++){
        if(bItr->first == key){
            keyExists = true;
            bItr->second = val;
            cout << "[WARNING] key exists. Value replaced." <<endl;
            break;
        }
    }
    
    if(!keyExists)
        cell.emplace_back(key, val);
        
    return;
}

void HashTable::removeItem(int key){
    int hashVal = hashFunction(key);
    auto& cell =table[hashVal];
    auto bItr = begin(cell);
    bool keyExists = false;
    for(; bItr != end(cell); bItr++){
        if(bItr->first == key){
            keyExists = true;
            bItr = cell.erase(bItr);
            cout << "[INFO] Pair removed." <<endl;
            break;
        }
    }
    
    if(!keyExists)
        cout << "[WARNING] Key not found. Pair not removed."<<endl;
        
    return;
}

void HashTable::printTab(){
    for(int i{}; i < hashGroups; i++){
        if(table[i].size() ==0) continue;
        
        auto bItr = table[i].begin();
        for(; bItr != table[i].end(); bItr++){
            cout << "[INFO] key " << bItr->first << " Value: " << bItr->second << endl;
        }
    }
    return;
}


int main() {
    HashTable HT;
    
    if (HT.isEmpty())
        cout << "Correct answer. Good Job!!! " << endl;
    else
        cout << "Oh oh. We nedd to check out code. " <<endl;
    
    
    HT.insertItem(905, "Jim");
    HT.insertItem(201, "Rob");
    HT.insertItem(823, "John");
    HT.insertItem(332, "Doe");
    HT.insertItem(124, "Hor");
    HT.insertItem(807, "Hoe");
    HT.insertItem(529, "Jeery");
    HT.insertItem(529, "Tom");
    
    HT.printTab();
    
    HT.removeItem(332);
    HT.removeItem(100);
    
    if (HT.isEmpty())
        cout << "Oh oh. We nedd to check out code. " <<endl;
    else
        cout << "Correct answer. Good Job!!! " << endl;
    
    return 0;
}

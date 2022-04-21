class MyHashSet {
private:
    vector<list<int>>m;
    int size;
public:
    MyHashSet() {
        size = 100;
        m.resize(size);
    }
    int hash(int key){
        return key%size;
    }
    list<int>::iterator search(int key){
        int i = hash(key);
        return find(m[i].begin(),m[i].end(),key);
    }
    
    void add(int key) {
        int i = hash(key);
        if(!contains(key)){
            m[i].push_back(key);
        }
        return;
    }
    
    void remove(int key) {
        int i = hash(key);
        if(contains(key)){
            m[i].erase(search(key));
        }
        return;
    }
    
    bool contains(int key) {
        int i = hash(key);
        if(search(key)!=m[i].end()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
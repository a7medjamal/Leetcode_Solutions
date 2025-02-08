class NumberContainers {
public:
    unordered_map<int,int> mp;
    unordered_map<int, set<int>> mp_num;
    NumberContainers() {}
    void change(int index, int number) {
        if(mp.find(index)!=mp.end()) {
            mp_num[mp[index]].erase(index);
            if(mp_num[mp[index]].empty()) {
                mp_num.erase(mp[index]);
            }
        }
        mp[index]=number;
        mp_num[number].insert(index);
    }

    int find(int number) {
        if (mp_num[number].empty())
            return -1;
        int ret = *mp_num[number].begin();
        return ret;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
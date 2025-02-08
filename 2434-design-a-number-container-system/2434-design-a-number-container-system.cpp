class NumberContainers {
public:
    unordered_map<int,int> mp;
    unordered_map<int, priority_queue<int,vector<int>,greater<int>>> mp_num;
    NumberContainers() {
        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    }
    void change(int index, int number) {
        mp[index]=number;
        mp_num[number].push(index);
    }
    int find(int number) {
        while(!mp_num[number].empty()&&mp[mp_num[number].top()]!=number) mp_num[number].pop();
        if (mp_num[number].empty())
            return -1;
        return mp_num[number].top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
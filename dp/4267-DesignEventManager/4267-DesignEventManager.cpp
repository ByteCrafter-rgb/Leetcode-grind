// Last updated: 6/9/2026, 9:10:38 PM
class EventManager {
public:
    map<int,int> mp;
    // pair<int,int> px = {-1.-1};
    map<int, set<int>> mvk;
    EventManager(vector<vector<int>>& events) {
        for(auto i:events){
            mp[i[0]] = i[1];
            mvk[i[1]].insert(i[0]);
        }
    }
    
    void updatePriority(int eventId, int newPriority) {
        int oldp = mp[eventId];
        mvk[oldp].erase(eventId);
        if(mvk[oldp].empty()){
            mvk.erase(oldp);
        }
        mvk[newPriority].insert(eventId);
        mp[eventId] = newPriority;
        
    }
    
    int pollHighest() {
        if (mvk.empty()) return -1;

    auto it = prev(mvk.end());  // normal iterator

    int priority = it->first;
    int eventId = *it->second.begin();

    it->second.erase(it->second.begin());

    if (it->second.empty())
        mvk.erase(it);

    mp.erase(eventId);

    return eventId;
    }
};

/**
 * Your EventManager object will be instantiated and called as such:
 * EventManager* obj = new EventManager(events);
 * obj->updatePriority(eventId,newPriority);
 * int param_2 = obj->pollHighest();
 */
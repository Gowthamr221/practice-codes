class UndergroundSystem {
    map <int,pair<string,int>>check;
    map<pair<string,string>,vector<int>> storage;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        check[id] = {stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
         pair<string,int> temp = check[id];
        storage[{temp.first,stationName}].push_back(t-temp.second);
    }
    
    double getAverageTime(string startStation, string endStation) {
        
        double avg = 0;
        if(storage.find({startStation,endStation})==storage.end()){
            return avg;
        }
        vector<int>temp = storage[{startStation,endStation}];
        for(auto it : temp){
            avg +=it;
        }
        return avg/temp.size();
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
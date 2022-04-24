
class UndergroundSystem {
    map<int,pair<string,int>> checkInHistory;
    map<pair<string,string>,pair<int,int>> storage;
public:
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkInHistory[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string,int> temp = checkInHistory[id];
        if(storage.find({temp.first,stationName})==storage.end()){
            storage[{temp.first,stationName}]= {t-temp.second,1};
         
        }
        else{
             storage[{temp.first,stationName}].first+=t-temp.second;
            storage[{temp.first,stationName}].second+=1;

        }
         
    }
    
    double getAverageTime(string startStation, string endStation) {
        double avg = 0;
        if(storage.find({startStation,endStation})==storage.end()){
            return avg;
        }
        int totalHours = storage[{startStation,endStation}].first;
        int totalCount = storage[{startStation,endStation}].second;
        avg = (double)totalHours/(double)totalCount;
        return avg;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int fleets{0};
 
    double last_time{0};

    vector<pair<int, double>> cars;

    for(int i{0}; i < position.size(); ++i){
        double time = (double)(target - position[i]) / speed[i];
        cars.push_back({position[i], time});
    }
    sort(cars.begin(), cars.end());

    for(int i = position.size() - 1; i >= 0; i--){
        double time = cars[i].second;
        if(time > last_time){
            last_time = time;
            fleets++;
        }
    }

    return fleets;
    }
};
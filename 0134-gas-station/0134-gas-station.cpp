class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum_gas = 0;
        int sum_cost = 0;

        for(int i =0; i<gas.size(); i++){
            sum_gas += gas[i];
            sum_cost += cost[i];
        }
        if(sum_gas < sum_cost) return -1;

        int tank = 0;
        int start = 0;
        for(int i=0; i< gas.size(); i++){
            tank += gas[i] - cost[i];
            if(tank < 0){
                tank = 0;
                start = i+1;
            }
        }
        return start;
    }
};
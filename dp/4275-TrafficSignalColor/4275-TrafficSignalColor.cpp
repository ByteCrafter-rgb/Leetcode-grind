// Last updated: 6/9/2026, 9:10:32 PM
class Solution {
public:
    string trafficSignal(int timer) {
        if(timer == 0) return "Green";
        if(timer == 30) return "Orange";
        if(timer > 30 && timer <= 90) return "Red";

        return "Invalid";
    }
};
//PEAK_VALLEY APPROACH
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        ios_base::sync_with_stdio(false);// this is just template code  
        cin.tie(NULL);                    // for making input output faster.(for competitive coding) 
        
        int n = prices.size();
        int diff = 0;
        for(int i=1;i<n;++i)
        {
            if(prices[i] > prices[i-1])
                diff += prices[i]-prices[i-1];
        }
        return diff;
    }
};
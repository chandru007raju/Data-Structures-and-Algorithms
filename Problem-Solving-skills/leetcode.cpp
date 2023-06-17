class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long nsize=gifts.size(); 
        priority_queue<long long> prioq; 
            for(auto ele: gifts){ 
                prioq.push(ele); 
            } 
        long long fin=0; 
        while(k--)
            { 
                prioq.push(sqrt(prioq.top())); 
                prioq.pop();   
            } 
        while(!prioq.empty())
            { 
                fin+=prioq.top(); 
                prioq.pop(); 
            } 
            return fin;
        }
    };
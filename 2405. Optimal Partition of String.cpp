//2405. Optimal Partition of String
class Solution {
public:
    int partitionString(string s) {
        int count =0;
        int right = 0;
        int mask = 0;
        int n = s.size();
        while(right<n)
        {
            int pos = (s[right]-'a');
            if(mask &(1<<pos))
            {
                mask = 0;
                count++;
            }
            mask |=(1<<pos);
            right++;
        }
        if(mask) count++;
        return count;
        
    }
};

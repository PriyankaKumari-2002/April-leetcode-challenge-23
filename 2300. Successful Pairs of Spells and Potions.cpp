//2300. Successful Pairs of Spells and Potions
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
       vector<int>ans;
    sort(potions.begin(), potions.end());
    for(long long i: spells)
    {
        int start = 0;
        int end = potions.size()-1;
        int count = 0;
        while(start<=end)
        {
            long long mid = start+(end-start)/2;
            if(i*potions[mid]>=success)
            {
                count+=end-mid+1;
                end = mid-1;
            }
            if(i*potions[mid]<success)
            {
                start = mid+1;
            }
        }
        ans.push_back(count);
    }
        return ans;
    }
};

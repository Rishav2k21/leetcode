class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int k=limit;
        int count=0,s=0;
        int e=people.size()-1;
        while(s<=e){ if(people[s]+people[e--]<=limit)s++; 
                   count++;}
        return count;
    }
};
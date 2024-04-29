class Solution {
public:
    int minOperations(vector<int>& num, int k) {
        int x=0;
        for(int i=0;i<num.size();i++){
            x=x^num[i];
        }
        int count=0;
        for (int i = 0; i < 32; i++) {
        if (((x >> i) & 1) != ((k >> i) & 1)) {
            count++;
        }
    }
        return count;
    }
};
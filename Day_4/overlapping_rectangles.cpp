class Solution {
    bool is_overlap(int a1 ,int a2 ,int b1 ,int b2)
    {
        if(a1 < b1)
        {
            return a2 > b1;
        }
        else
        {
            return a1 < b2;
        }
    }
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return is_overlap(rec1[0] , rec1[2] , rec2[0] , rec2[2]) && is_overlap(rec1[1] , rec1[3] , rec2[1] , rec2[3]);
    }
};

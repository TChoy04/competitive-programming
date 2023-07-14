//Sliding Window?
Time Complexity: O(N)
Space Complexity: O(1)

// Have the window cover the entire array, start closing it and measure the area by taking the width and multiplying it with the minimum height.


class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0;
        int ans = 0;
        int R = height.size()-1;
        while(R>L){
            int width = R-L;
            int area = width*min(height[R],height[L]);
            ans = max(ans,area);
            if(height[L]<height[R])L++;
            else R--;
        }
        return ans;
    }
};

//Revisited, more concise solution. Don't know why I used all those variables in the previous solution.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0; 
        int R = height.size()-1;
        int res = 0;
        while(R>L){
            res = max(res,min(height[R],height[L])*(R-L));
            if(height[L]<height[R]) L++;
            else R--;
        }
        return res;
    }
};

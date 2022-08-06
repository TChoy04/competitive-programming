#Sliding Window?
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

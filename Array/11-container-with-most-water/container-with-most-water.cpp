class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int maximum = 0;
        int j = n - 1;
        while (i < j) {
            int width = j - i;
            int h = min(height[i], height[j]);
            int area = h * width;
            maximum = max(area, maximum);
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return maximum;
    }
};
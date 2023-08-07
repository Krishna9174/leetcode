class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int i=0;
        int j=n-1;
        int temp=0;
       while(i<j){
           temp=min(height[i], height[j])*(j-i);
            area=max(temp, area);
           if(height[i]<height[j]) i++;
           else j--;
       }
        return area;
    }
};
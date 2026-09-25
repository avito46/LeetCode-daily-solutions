class Solution {
public:
    int maxArea(vector<int>& height) {
            int maxh=0;
    int i=0;  //2pointer approach
    int j=height.size()-1;
    while(i<j)
    {
        int w=j-i;
        int h=min(height[i],height[j]); //it is obvious we need mininum heigh
        int area=w*h;
        maxh=max(maxh,area);
        if(height[i]<height[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return maxh;
    }
};
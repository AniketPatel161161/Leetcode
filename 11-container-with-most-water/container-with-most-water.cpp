class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int maxCapacity = 0 ; 
        while(start < end){
            int hgt = min(height[start] , height[end]);
            int width = end - start ;
            int area = hgt * width;
            
            maxCapacity = max(maxCapacity , area);

            if(height[start]<height[end]){
                start++;
            }else{
                end--;
            }

        }
        return maxCapacity;
        
    }
};
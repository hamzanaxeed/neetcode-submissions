class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int left_Pointer=0;
        int right_Pointer=heights.size()-1;

        int maximum_Water=0;
        
        while(left_Pointer<right_Pointer){

            int width=right_Pointer-left_Pointer;
            int height=min(heights[left_Pointer],heights[right_Pointer]);

            maximum_Water=max(maximum_Water,abs(height*width));
            if(heights[left_Pointer]<heights[right_Pointer]){left_Pointer++;}
            else{right_Pointer--;}
        }
        return maximum_Water;
    }
};

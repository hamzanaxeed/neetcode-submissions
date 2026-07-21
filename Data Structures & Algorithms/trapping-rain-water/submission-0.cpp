class Solution {
public:
    int trap(vector<int>& height) {

    const int array_Size=height.size();
    vector<int> left_Max(array_Size);
    vector<int> right_Max(array_Size);

    left_Max[0]=height[0];
    for(int i=1;i<array_Size;i++){
        left_Max[i]=max(left_Max[i-1],height[i]);
    }

    right_Max[array_Size-1]=height[array_Size-1];
    for(int i=array_Size-2;i>=0;i--){
        right_Max[i]=max(right_Max[i+1],height[i]);
    }

    int result=0;
    for(int i=0;i<array_Size;i++){
        result+=min(left_Max[i],right_Max[i])-height[i];
    }
    return result;
    }
};

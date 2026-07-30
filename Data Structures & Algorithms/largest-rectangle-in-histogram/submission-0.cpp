class Solution {
public:
    void print_Vector(vector<int>& my_Vector){

        for(int w:my_Vector){
            cout<<w<<" ";
        }cout<<endl;
    }

    int largestRectangleArea(vector<int>& heights) {
        
        if(heights.size()==0)return 0;
        if(heights.size()==1)return heights[0];

        vector<int> right_Small(heights.size());
        vector<int> left_Small(heights.size());

        stack<pair<int,int>> st;
        for(int i=heights.size()-1;i>=0;i--){

            while(!st.empty() && st.top().first>=heights[i])st.pop();

            if (st.empty())
                right_Small[i] = heights.size();
            else
                right_Small[i] = st.top().second;

            st.push({heights[i], i});
        }

        while (!st.empty())
            st.pop();

        for(int i=0;i<heights.size();i++){

            while(!st.empty() && st.top().first>=heights[i])st.pop();

            if (st.empty())
                left_Small[i] = -1;
            else
                left_Small[i] = st.top().second;

            st.push({heights[i], i});
        }

        int maxArea = 0;

        for (int i = 0; i < heights.size(); i++) {
            int width = right_Small[i] - left_Small[i] - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        } 
        return maxArea;
    }

};

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        if(!k)return {};
       
        vector<int> result;

        int closest_Index=0;

        if(x <= arr[0])
            closest_Index = 0;
        else if(x >= arr.back())
            closest_Index = arr.size() - 1;
        else{
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==x){
                closest_Index=i;
                break;
            }

            if(arr[i+1]==x){
                closest_Index=i+1;
                break;
            }

            if(arr[i]<x && arr[i+1]>x){
                if(abs(arr[i]-x)<=abs(x-arr[i+1])){
                    closest_Index=i;
                }else{
                    closest_Index=i+1;
                }
                break;
            }
            
        }
        }

        int left=closest_Index-1;
        int right=closest_Index+1;
        result.push_back(arr[closest_Index]);

        while(result.size()<k){

            if(left < 0){
                result.push_back(arr[right]);
                right++;
            }
            else if(right >= arr.size()){
                result.push_back(arr[left]);
                left--;
            }
            else if(abs(arr[left]-x) <= abs(arr[right]-x)){
                result.push_back(arr[left]);
                left--;
            }
            else{
                result.push_back(arr[right]);
                right++;
            }

        }
        sort(result.begin(),result.end());
        return result;
    }
};
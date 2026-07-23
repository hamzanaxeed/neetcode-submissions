class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if(s1.size()>s2.size())return false;

        unordered_map<char,int> my_Hash_Map;
        for (auto characters:s1){
            my_Hash_Map[characters]++;
        }

        for(int i=0;i<s1.size();i++){
            my_Hash_Map[s2[i]]--;
            if(my_Hash_Map[s2[i]]==0)my_Hash_Map.erase(s2[i]);
        }

        for(int pointer=s1.size();pointer<s2.size();pointer++){
            
            if(my_Hash_Map.size()==0)return true;

            my_Hash_Map[s2[pointer]]--;
            my_Hash_Map[s2[pointer-s1.size()]]++;
            if(my_Hash_Map[s2[pointer]]==0)my_Hash_Map.erase(s2[pointer]);
            if (my_Hash_Map[s2[pointer-s1.size()]] == 0)
                my_Hash_Map.erase(s2[pointer-s1.size()]);

        }

        if (my_Hash_Map.empty())
            return true;
        return false;
      


    }
};

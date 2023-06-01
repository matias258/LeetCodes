class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> dicc1;
        map<int, int> dicc2;
        vector<int> res;
        //dicc de nums1
        for (int i = 0; i < nums1.size(); i++){
            if (dicc1.count(nums1[i]) == 0){
                dicc1[nums1[i]] = 1;
            }
            else{
                dicc1[nums1[i]]++;
            }
        }

        //dicc de nums2
        for (int i = 0; i < nums2.size(); i++){
            if (dicc2.count(nums2[i]) == 0){
                dicc2[nums2[i]] = 1;
            }
            else{
                dicc2[nums2[i]]++;
            }
        }
        vector<int> res1;
        vector<int> res2;     
           

        for (auto& it1: dicc1){
            res1.push_back(it1.first);
        }
        for (auto& it2: dicc2){
            res2.push_back(it2.first);
        }

        for (int i = 0; i < res1.size(); i++){
            for (int j = 0; j < res2.size(); j++){
                if (res1[i] == res2[j]){
                    res.push_back(res2[j]);
                }
            }
        }

        return res;

    }
};

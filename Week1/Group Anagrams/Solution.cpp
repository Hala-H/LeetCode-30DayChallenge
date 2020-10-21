class Solution {
public:       
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            
            vector<string> temp;
            vector<string> anagrams;
            vector<vector<string>> result;
            int n = strs.size();
            vector<bool> visited(n, false); 
            int count = 0;
    
            // Copy each element to vector temp
            // and then sort each element alphabetically
                for (int i = 0; i < n; i++)
            {
                temp.push_back(strs[i]);
                sort(temp[i].begin(), temp[i].end());
            }

            // Traverse through array elements and 
            // to check if element is processes
            for (int i = 0; i < n; i++) 
            { 
                // Skip this element if already processed 
                if (visited[i] == true) 
                    continue; 

                // if new element equals current then
                // visited is true
                for (int j = i + 1; j < n; j++) 
                { 
                    if (temp[i] == temp[j])  
                        visited[j] = true;  
                } 
                for(int k = 0; k < n; k++)
                {
                    if(temp[i] == temp[k])
                        anagrams.push_back(strs[k]);        
                }
                result.push_back(anagrams);
                anagrams.clear();
            }
            return result;
        }
};

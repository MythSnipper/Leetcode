//Time: O(n)
//Space: O(1)
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            if(s.empty())return 0;
            unordered_map<char, int> vel;
            int longest = 0;
            
            int slowptr = 0;
            for(int i=0;i<s.length();i++){
                char cuerert = s[i];
                if(vel.find(cuerert) != vel.end()){ //found
                    if(vel[cuerert] >= slowptr){
                        //new longest substring
                        longest = (i-slowptr > longest) ? i-slowptr : longest;
                        //move slow ptr until good
                        slowptr = vel[cuerert] + 1;
                    }
                }
                vel[cuerert] = i;
            }
            longest = (s.length()-slowptr > longest) ? s.length()-slowptr : longest;
            return longest;
        }
    };
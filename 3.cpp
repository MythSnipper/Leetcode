class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_set<char> vel;
            int longest = 0;
            
            int slowptr = 0;
            for(int i=0;i<s.length();i++){
                char cuerert = s[i];
                cout << "Doing: " << cuerert << "\n";
                if(vel.find(cuerert) != vel.end()){ //found
                    cout << "REPEATED! new length " << (i-slowptr) << "\n";
                    //new longest substring
                    longest = (i-slowptr > longest) ? i-slowptr : longest;
                    //move slow ptr until good
                    while(s[slowptr] != cuerert){
                        cout << "SLOWPTR is " << slowptr << ", char " << s[slowptr] << "\n";
                        vel.erase(s[slowptr]);
                        slowptr++;
                    }
                    slowptr++;
    
                    cout << "erased, now fast is " << i << " and slow is " << slowptr << "\n";
                }
                else{
                    cout << "NOT FOUND\n";
                    vel.insert(cuerert);
                }
            }
            longest = (s.length()-slowptr > longest) ? s.length()-slowptr : longest;
            return longest;
        }
    };
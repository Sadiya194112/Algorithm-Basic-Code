/*  Everything is alright. Just you've to complete
    the main function based on the input of the problem.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies){
        map<string, vector<string> > make;
        map<string, int> indeg;

        int i,j;
        for(i=0; i<ingredients.size(); i++){
            for(j=0; j<ingredients[i].size(); j++){
                make[ingredients[i][j]].push_back(recipes[i]);
                indeg[recipes[i]]++;
            }
        }
        vector<string> ans;
        queue<string> q;
        for(i=0; i<supplies.size(); i++){
            q.push(supplies[i]);
        }
        while(!q.empty()){
            string s = q.front();
            q.pop();
            for(auto str:make[s]){
                indeg[str]--;
                if(indeg[str]==0){
                    q.push(str);
                    ans.push_back(str);
                }
            }
        }
        return ans;
    }
};
signed main(){

    return 0;
}

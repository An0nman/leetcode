class Solution {
public:
    bool numberChecker(string c){
        if(c=="+"||c=="D"||c=="C")return false;
        return true;
    }
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int total=0;
        for (int i = 0; i < operations.size(); i++) {
            if(numberChecker(operations[i])){
                record.push_back(stoi(operations[i]));
                total+=record.back();
            }else{
                if(operations[i]=="+"){
                    record.push_back(record.back()+record[record.size()-2]);
                    total+=record.back();
                }else if(operations[i]=="D"){
                    record.push_back(record.back()*2);
                    total+=record.back();
                }else if(operations[i]=="C"){
                    total-=record.back();
                    record.pop_back();
                }
            }
        }
        return total;
    }
};
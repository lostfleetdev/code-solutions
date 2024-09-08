#include <iostream>
#include <vector>

using namespace std;

vector<int> twosum(vector<int> num, int target){
    vector<int> vec;

    for(int i = 0; i < num.size(); i++){
        for(int j = 0; j < num.size(); j++){
            if(num[i] + num[j] == target){
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
        }
    }

    return {};
}

void printv(vector<int> v){
    for(int i = 0; i <v.size(); i++){
        cout << v[i] << "\t";
    }
    cout << endl;
}   

int main(){
    vector<int> v = {1,2,3};
    printv(twosum(v,4));
    return 0;
}
#include <string>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int n = elements.size();
    sort(elements.begin(), elements.end());
    vector<int> result;
    
    for(int i=0; i<n; i++){
        vector<bool> visited(n, true);
        for(int j=0; j<n-i-1; j++)
            visited[j] = false;
        do{
            for(int i=0; i<n; i++)
                cout << visited[i] << " ";
            int sum = 0;
            for(int i=0; i<n; i++){
                if(visited[i]){
                    sum += elements[i];
                }
            }
            if(find(result.begin(), result.end(), sum) == result.end()) { // vector내에 결과 값이 존재하지 않음
        result.push_back(sum);
        cout << " " << sum;
    }
            puts("");
        } while(next_permutation(visited.begin(), visited.end()));
    }
    
    sort(result.begin(), result.end());
    //for(auto it : result)
        //cout << it << " ";
    
    answer = result.size();
    return answer;
}

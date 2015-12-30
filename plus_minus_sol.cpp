#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    float positive=0, negative=0, zero=0;



    for (int i=0;i<n;i++){

        if (arr[i]==0){
            zero++;
        }

        else if (arr[i]<0){
            negative++;
        }
        else if (arr[i]>0){
            positive++;
        }


    }
    cout<<positive/n<<endl<<negative/n<<endl<<zero/n<<endl;

    return 0;
}

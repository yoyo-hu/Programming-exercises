#include <vector>
#include <iostream>
using namespace std;

int main(){
    vector<int> vec(10);
    vector<int>::iterator iter;
    for(int i = 0; i <= 9; i++){
        vec[i] = i;
    }


    // 用iter将每一个元素加1
    for(iter = vec.begin(); iter != vec.end(); iter++){
        *iter += 1;
    }

    // 在第1个元素前面插入3个100
    iter = vec.begin() + 1;
    vec.insert(iter, 3, 100);


    // 删除最后一个元素
    vec.pop_back();


    // 在最后的位置插入元素200 
    vec.push_back(200);

    // 利用iter输出vec
    for(iter = vec.begin(); iter != vec.end(); iter++){
        cout << *iter << " ";
    }
    


    return 0;
}

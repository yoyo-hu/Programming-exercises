#include <iostream>
#include <cstring>
#include "Vector.h"
#define MAX 51
using namespace std;
 int main() {
    string name = "";
    int dim, num[MAX];
    cin >> name >> dim;
    for (int i = 0; i < dim; i++) {
        cin >> num[i];
    }
    Vector vec1(name, dim, num);
    vec1.print();
    Vector vec2(vec1);
    vec2.print();
    vec1.isEqual(vec2);
    int vec3_num[] = {1, 2, 3};
    Vector vec3(name, 3, vec3_num);
    vec1.isEqual(vec3);
    vec2.setName("helloWorld!");
    vec1.isEqual(vec2);
     return 0;
}
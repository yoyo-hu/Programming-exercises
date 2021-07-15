//#include <iostream>
//#include <cstring>
//#include <algorithm>
//using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int tc, num;
char stu[100][11], ans[12];
int cnt[110], rank1[110];

//bool cmp(const int &i, const int &j) { return cnt[i] < cnt[j]; } //核心：辅助排序的数组
int cmp(const void *a, const void *b) {
    return cnt[*(int *) a] > cnt[*(int *) b];
//    return(*(int*)a - *(int*)b);//升序
//    return(*(int*)b - *(int*)a);//降序
}

int main() {
//    cin >> tc;
    scanf("%d", &tc);
    for (int th = 1; th <= tc; ++th) {
//        cout << "test case " << th << ":" << endl;
        printf("test case %d:\n", th);
//        cin >> num;
        scanf("%d", &num);
        for (int i = 0; i < num; ++i)
            rank1[i] = i;

        for (int i = 0; i < num; ++i)
            for (int j = 0; j < 10; ++j)
//                cin >> stu[i][j];
                do {
                    scanf("%c", &stu[i][j]);
                } while (!isalpha(stu[i][j]));


        for (int j = 0; j < 10; ++j)
//            cin >> ans[j];
//            scanf("%c", &ans[j]);
            do {
                scanf("%c", &ans[j]);
            } while (!isalpha(ans[j]));
        for (int i = 0; i < num; ++i) {
            cnt[i] = 0;
            for (int j = 0; j < 10; ++j)
                if (ans[j] == stu[i][j])
                    cnt[i]++; // cout<<i<<" & "<<cnt[i]<<endl;
        }
        // for(int i=0;i<num;++i)
        //    cout<<"* "<<rank1[i]<<endl;
//        sort(rank1, rank1 + num, cmp);
        qsort(rank1, num, sizeof(rank1[0]), cmp);
        for (int i = 0; i < num; ++i) {
//            cout << "Student " << rank1[i] << ": ";
//            cout << cnt[rank1[i]] << endl;
            printf("Student %d: %d\n", rank1[i], cnt[rank1[i]]);
        }
    }
    return 0;
}
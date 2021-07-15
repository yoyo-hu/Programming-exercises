#include "source.h"

bool fun_0(const Node* node){
    return node->value%2==0;
}
bool fun_1(const Node* node){
    return node->value%3==0;
}
bool fun_2(const Node* node){
    return node->value%5==0;
}

int main(){
    struct memoryManager myManager;
    StaticLinkedList List1,List2;
    iniManager(&myManager);
    iniList(&List1);
    iniList(&List2);

    if (true){
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; ++i) {
            int value,position;
            scanf("%d",&value);
            scanf("%d",&position);
            insert(&List1,&myManager,value,position);
            insert(&List2,&myManager,n/6*value,position/2);
        }
        show(&List1,&myManager);
        show(&List2,&myManager);

        bool (*fun[3])(const Node*)={fun_0,fun_1,fun_2};
        int v1,v2;
        for (int i = 0; i < 3; ++i) {
            v1=remove_if(&List1,&myManager,fun[i]);
            v2=remove_if(&List2,&myManager,fun[i]);
            insert(&List1,&myManager,v1,0);
            insert(&List2,&myManager,v2,0);
        }
        show(&List1,&myManager);
        show(&List2,&myManager);

        int m;
        scanf("%d",&m);
        for (int i = 0; i < m; ++i) {
            int value,position;
            scanf("%d",&value);
            scanf("%d",&position);
            insert(&List1,&myManager,value,position);
            insert(&List2,&myManager,2*value,position/2-2);
        }
        show(&List1,&myManager);
        show(&List2,&myManager);
    }

    releaseManager(&myManager);
    
    return 0;
}

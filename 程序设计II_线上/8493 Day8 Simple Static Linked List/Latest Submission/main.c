#include "source.h"

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
            insert(&List2,&myManager,2*value,position/2);
        }
        show(&List1,&myManager);
        show(&List2,&myManager);

        int m;
        scanf("%d",&m);
        for (int i = 0; i < m; ++i) {
            int position;
            scanf("%d",&position);
            erase(&List1,&myManager,position);
            erase(&List2,&myManager,position/2);
        }
        show(&List1,&myManager);
        show(&List2,&myManager);

        int t;
        scanf("%d",&t);
        for (int i = 0; i < t; ++i) {
            int value,position;
            scanf("%d",&value);
            scanf("%d",&position);
            insert(&List1,&myManager,value,position);
            insert(&List2,&myManager,2*value,position/2);
        }
        if (t){
            show(&List1,&myManager);
            show(&List2,&myManager);
        }

        pushBack(&List1,&myManager,n);
        pushBack(&List2,&myManager,m);
        show(&List1,&myManager);
        show(&List2,&myManager);

        popBack(&List1,&myManager);
        popBack(&List2,&myManager);
        show(&List1,&myManager);
        show(&List2,&myManager);

    }
    releaseManager(&myManager);

    return 0;
}
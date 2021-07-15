#include "source.h"
#include "test.h"

int main(){
    struct memoryManager myManager;
    StaticLinkedList List1,List2;
    iniManager(&myManager);
    iniList(&List1);
    iniList(&List2);

    if(true){
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

        Pointer p=List1.head;

        reverse(&List1,&myManager);
        reverse(&List2,&myManager);

        show(&List1,&myManager);
        show(&List2,&myManager);

        testSwap(p,&myManager);

    }

    releaseManager(&myManager);
    return 0;
}

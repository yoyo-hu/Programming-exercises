#include "source.h"
#include "frequency.h"

#define Insert 1
#define Push 2
#define Erase 3
#define Pop 4

int main(){
    struct memoryManager myManager;
    StaticLinkedList List1,List2;
    iniManager(&myManager);
    iniList(&List1);
    iniList(&List2);

    srand((unsigned)time(NULL));

    if (true){
        int n;
        scanf("%d",&n);
        for (int i = 0; i < n; ++i) {
            int op;
            scanf("%d",&op);
            switch (op){
                case Insert:{
                    int value,position;
                    scanf("%d",&value);
                    scanf("%d",&position);
                    if(insert(&List1,&myManager,value,position))
                        monitor(&List1,&myManager,position);                   
                    if (insert(&List2,&myManager,2*value,position/2))
                        monitor(&List2,&myManager,position/2);
                    break;
                }
                case Push:{
                    int value;
                    scanf("%d",&value);
                    if (pushBack(&List1,&myManager,value))
                        monitor(&List1,&myManager,List1.size-1);
                    if (pushBack(&List2,&myManager,2*value))
                        monitor(&List2,&myManager,List2.size-1);
                    break;
                }
                case Erase:{
                    int position;
                    scanf("%d",&position);
                    erase(&List1,&myManager,position);
                    erase(&List2,&myManager,position/2);
                    break;
                }
                case Pop:{
                    popBack(&List1,&myManager);
                    popBack(&List2,&myManager);
                    break;
                }
            }
        }
        show(&List1,&myManager);
        show(&List2,&myManager);
        evaluate();
    }
    releaseManager(&myManager);

    return 0;
}

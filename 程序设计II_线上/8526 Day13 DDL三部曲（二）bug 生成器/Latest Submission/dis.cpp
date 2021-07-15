#include "b.h"
int vv[5002][52];
int *Dis(int i,int j,int k,int r,int c){
return &vv[(i-1)*c+j][k];
}
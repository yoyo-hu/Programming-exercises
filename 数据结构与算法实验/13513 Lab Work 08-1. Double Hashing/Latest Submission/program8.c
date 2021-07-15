#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 64
#define NULLKEY -1
//产生随机数
int getRandomNum(){
    int RandomNum;
    RandomNum=rand();
    return  RandomNum%2;
}
int SumOfNumOfProbes=0;//探针次数总和
//初始化哈希表，使之成为全部区间均未被使用的状态
void InitHashTable(int* H)
{
	for(int i = 0;i < SIZE; i++)
	{
		H[i] = NULLKEY;
	}
}
//得到初始的哈希值，即12位的后6位数
int Hash(int* key)
{
	int index=0;
    for(int i=11;i>=6;i--){
        index=key[i]+index*2;
    }
    return index;
}
//得到哈希表要真正存放的数值，即12位的前6位数
int getVal(int*key){
    int val=0;
    for(int i=5;i>=0;i--){
        val=key[i]+val*2;
    }
    return val;
}
//插入哈希表，相应增加探针数目
void InsertHash(int* H,int* key)
{
    SumOfNumOfProbes++;
	int addr = Hash(key);  //get the address of hash
	while(H[addr] != NULLKEY){
        addr = (addr+1) % SIZE;
        SumOfNumOfProbes++;
    }
	H[addr] = getVal(key);
}
int main(){
    int* Hash=(int*)malloc(sizeof(int)*SIZE);
    InitHashTable(Hash);
    int num[12];//12-bit unsigned number
    //input the random num and Calculate the average number of probes
    srand((unsigned)time(NULL));
    printf("a list of 40 random 12-bit positive numbers:\n");
    for(int i=1;i<=40;i++){
        for(int i=0;i<12;i++){
            num[i]=getRandomNum();
            printf("%d",num[i]);
        }
        InsertHash(Hash,num);  
        if(i%5==0)   printf("\n");
        else printf("\t");
    }
    printf("the average number of probes:%lf",SumOfNumOfProbes*1.0/40);
    free(Hash);
    return 0;
}
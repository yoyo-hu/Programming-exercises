// setDemo.cpp ���ܣ� ��ʾset�������ʹ��  8.11.cpp
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int iarr[] = {1, 1, 2, 3, 3};
    double darr[] = {4.4, 5.6, 2.1, 7.8, 8.8, 9.8, 1.1};
    // ����������iarr������Ԫ�ض�set����iset���г�ʼ��: iset�н�����
    // ��3��Ԫ�أ�1�� 2�� 3
    set<int> iset(iarr, iarr + 5);
    set<double> dset;           // �����յ�set����

    // ���set����iset�е�Ԫ��
    cout << "content of the integer set container:" << endl;
    for (set<int>::iterator iter = iset.begin(); iter != iset.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    // ��iset�����в����ض�Ԫ��
    if (iset.find(2) != iset.end())
        cout << "2 is a element in the integer set container" << endl;
    else
        cout << "2 is not a element in the integer set container" << endl;
    if (iset.find(6) != iset.end())
        cout << "6 is a element in the integer set container" << endl;
    else
        cout << "6 is not a element in the integer set container" << endl;

    dset.insert(1.2);   // ��set����dset�в���Ԫ��
    dset.insert(3.4);
    dset.insert(3.4);
    dset.insert(darr, darr + 7);
    cout << endl;

    // ���set����dset�е�Ԫ��
    cout << "content of the double set container:" << endl;
    for (set<double>::iterator iter = dset.begin(); iter != dset.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    dset.erase(1.1);   // ɾ��dset�����е�Ԫ��1.1

    // ɾ��dset�����д��ڵ���3.4��С��7.8������Ԫ��
    dset.erase(dset.find(3.4), dset.find(7.8));

    // ���set����dset�е�Ԫ��
    cout << "content of the double set container(after delete):" << endl;
    for (set<double>::iterator iter = dset.begin(); iter != dset.end(); iter++)
        cout << *iter << " ";

    return 0;
}



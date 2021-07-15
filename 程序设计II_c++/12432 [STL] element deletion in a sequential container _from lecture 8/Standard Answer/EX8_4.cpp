#include <vector>
#include <deque>
#include <iostream>       // elementAccessDemo  8.5.cpp
using namespace std;

int main() {
	int iarr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	deque<int> ideq(iarr, iarr+10);
	deque<int>::iterator iter;

	// 输出删除操作之后list容器中的所有元素
	cout << "before delete:" << endl;
	for (iter = ideq.begin(); iter != ideq.end(); iter++) {
		cout << *iter << " ";
	}
  ideq.erase(ideq.begin());
  ideq.erase(ideq.end());
  cout << endl << "the first and last element are deleted:" << endl;
  for (iter = ideq.begin(); iter != ideq.end(); iter++) {
		cout << *iter << " ";
	}
	iter = ideq.begin();	           // iter指向ideq中现存的第1个元素
	ideq.erase(ideq.erase(iter + 1));  // 删除ideq中现存的第2、第3个元素

	// 输出删除操作之后list容器中的所有元素
	cout << endl << "the second and third element are deleted:" << endl;
	for (iter = ideq.begin(); iter != ideq.end(); iter++) {
		cout << *iter << " ";
	}

	// 删除容器中现存的前三个元素
	ideq.erase(ideq.begin(), ideq.begin() + 3);
	// 输出删除操作之后list容器中的所有元素
	cout << endl << "three elements at front are deleted:" << endl;
	for (iter = ideq.begin(); iter != ideq.end(); iter++) {
		cout << *iter << " ";
	}

	// 删除剩余的所有元素
	ideq.clear();
	cout << endl << "after clear:" << endl;
	if (ideq.empty())	 // 容器为空
		cout << "no element in double-ended queue" << endl;

	return 0;

}
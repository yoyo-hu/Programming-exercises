#include <iostream>
#include <algorithm>
using namespace std;

template< typename T >
class Set {
	public:
		Set();//
		Set(int maxSize);//
		~Set();//
		Set(const Set&);//
		Set operator+(const Set& s);
		Set operator-(const Set& s );
		void operator=(const Set& s);//
		bool insert(T newItem);//
		bool erase(T targetItem);//
		void print() const;//
		T* getData() const; //
		int getCount() const;//
		int getMaxSize() const;//
	private:
		int count;
		int maxSize;
		T* data;
};
template<class T>
Set<T> Set<T>::operator+(const Set& s) {
	Set s0(count + s.count);
	for (int i = 0; i < count; ++i) {
		s0.insert(data[i]);
	}
	for (int i = 0; i < s.count; ++i) {
		s0.insert(s.data[i]);
	}

	return s0;
}

template<class T>
Set<T> Set<T>::operator-(const Set& s) {
	Set s0(count);
	for (int i = 0; i < count; ++i) {
		s0.insert(data[i]);
	}
	for (int i = 0; i < s.count; ++i) {
		s0.erase(s.data[i]);
	}
	return s0;
}

template<class T>
Set<T>::Set() {
	data = new T[32];
	int maxSize = 32;
	count = 0;
}
template<class T>
Set<T>::Set(int maxSize) {
	this -> maxSize = maxSize;
	count = 0;
	data = new T[maxSize];
}
template<class T>
Set<T>::Set(const Set& other) {
	count = other.count;
	maxSize = other.maxSize;
	if (data)
		delete [] data;
	data = new T[maxSize];
	for (int i = 0; i < count; ++i) {
		data[i] = other.data[i];
	}
}
template<class T>
void Set<T>::operator=(const Set& other) {
	count = other.count;
	maxSize = other.maxSize;
	if (data)
		delete [] data;
	data = new T[maxSize];
	for (int i = 0; i < count; ++i) {
		data[i] = other.data[i];
	}
}
template<class T>
bool Set<T>::insert(T newItem) {
	for (int i = 0; i < count; ++i) {
		if ((data[i] < newItem) == false && (newItem < data[i]) == false)
			return false;
	}
	if (count < maxSize) {
		++count;
		data[count - 1] = newItem;
	} else {
		maxSize *= 2;
		T* data_mid = new T[maxSize];
		for (int i = 0; i < count; ++i) {
			data_mid[i] = data[i];
		}
		delete [] data;
		data = data_mid;
		++count;
		data[count - 1] = newItem;
	}
	return true;
}
template<class T>
bool Set<T>::erase(T targetItem) {
	int index = -1;
	for (int i = 0; i < count; ++i) {
		if ((data[i] < targetItem) == false && (targetItem < data[i]) == false) {
			index = i;
			break;
		}
	}
	if (index != -1) {
		for (int i = index; i < count - 1; ++i) {
			data[i] = data[i + 1];
		}
		--count;
		return true;
	} else
		return false;
}
template<class T>
Set<T>::~Set() {
	if (data)
		delete [] data;
}
template<class T>
T* Set<T>::getData() const {
	return data;
}
template<class T>
int Set<T>::getCount() const {
	return count;
}
template<class T>
int Set<T>::getMaxSize() const {
	return maxSize;
}
template<class T>
void Set<T>::print() const {
	for (int i = 0; i < count; ++i) {
		cout << data[i] << " ";
	}
	cout << endl;
}


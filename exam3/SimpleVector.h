#pragma once
#include <iostream>
template <typename T>
class SimpleVector
{

public:
	T* arr; // 10���� ��Ҹ� ������ �迭
	int size;
	int count = 0;


public:
	SimpleVector() : size(10) {
		arr = new T[size];
	}

	void push_back(T value) {
		if (count < size) {
			arr[count] = value; // �迭�� �� �߰�
			count++; // ũ�� ����
		}
		else {
			T* newarr = new T[size + 5];
			size = size + 5;
			for (int i = 0; i < count; i++) {
				newarr[i] = arr[i]; // ���� �迭�� �� ����
			}
			delete[] arr;
			arr = newarr;
			arr[count] = value;
			count++;
		}
	}
	T pop_back() {
		if (count > 0) {
			count--; // ũ�� ����
			return arr[count]; // ������ ��� ��ȯ
		}
		else {
			std::cout << "�迭�� ����ֽ��ϴ�." << std::endl;
			return T(); // �⺻�� ��ȯ
		}
	}
	int getSize() const {
		return count; // ���� ũ�� ��ȯ
	}
};



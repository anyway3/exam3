#pragma once
#include <iostream>
template <typename T>
class SimpleVector
{

public:
	T* arr; // 10개의 요소를 가지는 배열
	int size;
	int count = 0;


public:
	SimpleVector() : size(10) {
		arr = new T[size];
	}

	void push_back(T value) {
		if (count < size) {
			arr[count] = value; // 배열에 값 추가
			count++; // 크기 증가
		}
		else {
			T* newarr = new T[size + 5];
			size = size + 5;
			for (int i = 0; i < count; i++) {
				newarr[i] = arr[i]; // 기존 배열의 값 복사
			}
			delete[] arr;
			arr = newarr;
			arr[count] = value;
			count++;
		}
	}
	T pop_back() {
		if (count > 0) {
			count--; // 크기 감소
			return arr[count]; // 마지막 요소 반환
		}
		else {
			std::cout << "배열이 비어있습니다." << std::endl;
			return T(); // 기본값 반환
		}
	}
	int getSize() const {
		return count; // 현재 크기 반환
	}
};



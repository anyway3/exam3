#include <iostream>
#include <string>
#include "SimpleVector.h"





int main() {
	SimpleVector<int> vec; // int형 벡터 생성
	vec.push_back(10); // 10 추가
	vec.push_back(20); // 20 추가
	vec.push_back(30); // 30 추가
	vec.push_back(40); // 40 추가
	vec.push_back(50); // 50 추가
	vec.push_back(60); // 60 추가
	vec.push_back(70); // 70 추가
	vec.push_back(80); // 80 추가
	vec.push_back(90); // 90 추가
	vec.push_back(100); // 100 추가
	vec.push_back(110); // 110 추가 (크기 증가)
	vec.push_back(120); // 120 추가 (크기 증가)
	std::cout << "전체 배열 출력";
	for(int i = 0; i < vec.count; i++) {
		std::cout << vec.arr[i] << " "; // 배열의 모든 요소 출력
	}
std::cout<<"배열 제거"<< std::endl;
	for(int i = 0; i < 5; i++) {
		std::cout << vec.pop_back() << " "; // 마지막 요소 제거 및 출력
	}
	std::cout << std::endl;
	std::cout << "제거 후 배열 출력: ";
	for(int i = 0; i < vec.count; i++) {
		std::cout << vec.arr[i] << " "; // 제거 후 배열의 모든 요소 출력
	}
}
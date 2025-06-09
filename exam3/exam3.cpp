#include <iostream>
#include <string>
#include "SimpleVector.h"




int main() {
	SimpleVector<int> vec; // int형 벡터 생성
	vec.push_back(10); 
	vec.push_back(20); 
	vec.push_back(30); 
	vec.push_back(40);
	vec.push_back(500); 
	vec.push_back(600); 
	vec.push_back(705);
	vec.push_back(80); 
	vec.push_back(90); 
	vec.push_back(100); 
	vec.push_back(110);
	vec.push_back(120); 
	std::cout << "전체 배열 출력";
	for(int i = 0; i < vec.count; i++) {
		std::cout << vec.arr[i] << " "; // 배열의 모든 요소 출력
	}
	vec.sort(); // 배열 정렬
	std::cout << "\n정렬 후 배열 출력: ";
	for (int i = 0; i < vec.count; i++) {
		std::cout << vec.arr[i] << " "; // 배열의 모든 요소 출력
	}

	std::cout << std::endl;
	std::cout <<"사용중인 배열 크기: " << vec.getSize()<<"\n배열 총 크기: "<<vec.size<<std::endl; // 현재 크기와 용량 출력
std::cout<<"배열 제거"<< std::endl;
	for(int i = 0; i < 5; i++) {
		std::cout << vec.pop_back() << " "; // 마지막 요소 제거 및 출력
	}
	std::cout << "\n사용중인 배열 크기: " << vec.getSize() << "\n배열 총 크기: " << vec.size << std::endl; // 현재 크기와 용량 출력
	std::cout << std::endl;
	std::cout << "제거 후 배열 출력: ";
	for(int i = 0; i < vec.count; i++) {
		std::cout << vec.arr[i] << " "; // 제거 후 배열의 모든 요소 출력
	}
	std::cout << std::endl;

	std::cout << "배열을 넘어서는 값 제거 시도\n";
	for (int i = 0; i < 8; i++) {
		std::cout << vec.pop_back() << " "; // 마지막 요소 제거 및 출력
	}
	vec.resize(5); // 배열 크기를 5로 조정
	std::cout << "\n배열 크기 조정 후 사용중인 배열 크기: " << vec.getSize() << "\n배열 총 크기: " << vec.size << std::endl; // 현재 크기와 용량 출력
}
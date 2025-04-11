#include <iostream>
#include <Windows.h>

void test(int* var);
bool check(int num);

int main() {
	int num = 1;
	int *var = &num;

	std::cout << "Starting..." << std::endl;
	Sleep(4000);test(var);
	return 0;
}

void test(int* var) {
	while (true) {
		if (check(*var)) {
			std::cout << *var << std::endl;
		}
		(*var)++;
	}
}

bool check(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
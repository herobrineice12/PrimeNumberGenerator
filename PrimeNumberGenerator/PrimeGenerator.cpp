#include <iostream>
#include <Windows.h>

void test(int num);
bool check(int num);

int main() {
	int num = 1;
	int* var = &num;

	std::cout >> "Iniciando...\n";
	Sleep(5000); check(num);
}

void test(int num) {
	while (true) {
		if (check(var)) {
			std::cout << var << std::endl;
		}
		(*num++);
	}
}

bool check(int num) {
	for (i = 2; i <= sqrt(*var); i++) {
		if ((*var) % i == 0) {
			return false;
		}
	}
	return true;
}
#include <iostream>
#include <cmath>

bool check(int num);
void test(int *var);

int main() {
    int num = 1;
    int* var = &num;

    test(var);

    return 0;
}

bool check(int num) {
    int raiz = sqrt(num);
    if (num != 2 && num % 2 == 0) {
        return false;
    } else {
        for (int i = 2; i <= raiz; i++) {
            if (num % i == 0) {
                return false;
            }
        }

        return true;
    }
}

void test(int *var) {
    while (true) {
        if (check(*var)) {
            std::cout << *var << std::endl;
        }

        (*var)++;
    }
}

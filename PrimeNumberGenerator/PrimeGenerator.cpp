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
    if (num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
        return false;
    } else {
        for (int i = 11; i <= raiz; i+= 2) {
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

        if (*var == 2) {
            (*var)++;
        } else {
            (*var) += 2;
        }
    }
}

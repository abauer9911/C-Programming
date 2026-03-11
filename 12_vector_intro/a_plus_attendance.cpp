#include <iostream>
#include <cmath>
#include <vector>

void rotateLeft(std::vector<char>& v, int k);

int main(void) {
    std::vector<char> attend {'1', 'u', '3', '4', 'g', '6', 'r', 'j', 'y', 'j', 
        'd', 'd', 'f', 'h', 's', 'd', 'f', '5', 'a', 'd', 'h', '6', 'j', 's', 'd',
        'f', 'j', '1', 'i', '7', 'e', 'l', 'u', '4', 'm', 'o', '9', 's', 'j', 'd', 'f'
    };

    int n_rotations = pow((50 * 2 - 75 / 3 + 20 % 7 + 20 + 12 / 4), 3);

    rotateLeft(attend, n_rotations);

    for(int i = 0; i < 5; i++) {
        std::cout << attend.at(i);
    }

    std::cout << '\n';
    return 0;
}

void rotateLeft(std::vector<char>& v, int k) {
    if (v.empty()) return;

    // Normalize k to the range [0, v.size()-1]
    int n = static_cast<int>(v.size());
    k %= n;
    if (k < 0) k += n; // (just in case k is ever negative)

    if (k == 0) return;

    // Copy into a temp vector, shifted left by k
    std::vector<char> tmp;
    tmp.reserve(v.size());

    for (int i = k; i < n; i++) tmp.push_back(v[i]);
    for (int i = 0; i < k; i++) tmp.push_back(v[i]);

    v = tmp;
}
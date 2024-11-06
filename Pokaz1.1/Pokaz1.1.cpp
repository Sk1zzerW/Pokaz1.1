#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> mergeArrays(int* A, int M, int* B, int N) {
    std::vector<int> result;

    for (int i = 0; i < M; ++i) {
        result.push_back(A[i]);
    }
    for (int i = 0; i < N; ++i) {
        result.push_back(B[i]);
    }

    return result;
}

int main() {
    int M, N;

    std::cout << "масив A ";
    std::cin >> M;
    int* A = new int[M];

    std::cout << "масив A ";
    for (int i = 0; i < M; ++i) {
        std::cin >> A[i];
    }

    std::cout << "масив B ";
    std::cin >> N;
    int* B = new int[N];

    std::cout << "Введіть елементи B ";
    for (int i = 0; i < N; ++i) {
        std::cin >> B[i];
    }

    std::vector<int> result = mergeArrays(A, M, B, N);

    std::cout << "Масив, що містить елементи з обох масивів ";
    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] B;

    return 0;
}

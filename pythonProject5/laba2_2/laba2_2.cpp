#include <iostream>
#include <vector>

std::vector<int> addVectors(const std::vector<int>& vector1, const std::vector<int>& vector2) {
    // Проверяем, что векторы имеют одинаковую длину
    if (vector1.size() != vector2.size()) {
        throw std::invalid_argument("Vectors must have the same length");
    }

    std::vector<int> result(vector1.size());

    for (size_t i = 0; i < vector1.size(); ++i) {
        result[i] = vector1[i] + vector2[i];
    }

    return result;
}

int main() {
    // Пример использования функции
    std::vector<int> vector1 = { 1, 2, 3, 4, 5 };
    std::vector<int> vector2 = { 5, 4, 3, 2, 1,5 };

    try {
        std::vector<int> result = addVectors(vector1, vector2);

        std::cout << "Result of vector addition: ";
        for (int value : result) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
    catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

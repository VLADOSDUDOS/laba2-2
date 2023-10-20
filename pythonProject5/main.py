import math

# Функция для вычисления длины вектора
def vector_length(vector):
    return math.sqrt(sum([x**2 for x in vector]))

# Функция для сложения двух векторов одинаковой длины
def add_vectors(vector1, vector2):
    # Проверка, что векторы имеют одинаковую длину


    if length_vector1 != length_vector2:
        raise ValueError("Векторы должны иметь одинаковую длину")

    # Создаем новый вектор, элементы которого получаются сложением элементов исходных векторов
    result = [vector1[i] + vector2[i] for i in range(len(vector1))]
    return result

# Пример использования
vector1 = [2, 2, 2]
vector2 = [2, 2, 1]

# Вычисляем длины векторов
length_vector1 = vector_length(vector1)
length_vector2 = vector_length(vector2)

# Складываем векторы
result_vector = add_vectors(vector1, vector2)

print("Длина вектора 1:", length_vector1)
print("Длина вектора 2:", length_vector2)
print("Сумма векторов:", result_vector)

// RemoveElement.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void remove_element(int* arr, int& size, int element);

int main()
{
    int size;
    int* arr;
    int element;

    std::cout << "size = ";
    std::cin >> size;

    std::cout << "insert element which you want to delete\n";
    std::cin >> element;

    arr = (int*)new int[size];

    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }

    remove_element(arr, size, element);

    std::cout << "Your new array after removed\n";
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] <<", ";
    }


    delete[]arr;
    arr = nullptr;
    return 0;
}

void remove_element(int* arr, int& size, int element)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == element)
        {
            for (int j = i; j < size - 1; ++j)
            {
                arr[j] = arr[j + 1];
            }
            --size;
            --i;
        }
    }
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

// SUS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
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
#include <iostream>

using namespace std;

int main()
{
    // ДИСКЛЕЙМЕР все взято з паралельної реальності де Україна знаходиться на вершині свiту
    // техно світу а люди ніколи не чули що таке росія тому що її не існувало

    // Назва компютера
    string compName = "AzovStal";
    // Номер моделі (7 цифр)
    unsigned int ModelID = 1234567;
    // Сирійний код(5 цифр)
    unsigned short int versionCode = 54321;
    // Вік компютера
    unsigned short int copmYears = 17;
    // Працює?
    bool working = true;
    // Відеокарта
    string videographic = "BanderForce SBRX 3090 Ti";
    // Процесор
    string GPU = "Zelenskyi 2022HS";
    // ОЗУ
    string OperativeMemory = "17 UAB";
    // SDD
    string SSD = "255 TUAB";
    // Повна назва (секретний код)
    int compFullName = ModelID + versionCode;

    unsigned int totalMemoryInBytes =

        sizeof(compFullName) +
        sizeof(compName) +
        sizeof(copmYears) +
        sizeof(working) +
        sizeof(videographic) +
        sizeof(GPU) +
        sizeof(OperativeMemory) +
        sizeof(SSD);

    cout << "Повна назва компютера:\t" << compFullName << endl;
    cout << "Назва компютера:\t\t" << compName << endl;
    cout << "Вік компютера:\t\t\t" << copmYears << endl;
    cout << "Працює:\t\t\t\t\t" << ((working) ? "Так" : "Ні") << endl;
    cout << "Відеокарта:\t\t\t\t" << videographic << endl;
    cout << "Процесор:\t\t\t\t" << GPU << endl;
    cout << "ОЗУ:\t\t\t\t\t" << OperativeMemory << endl;
    cout << "SDD:\t\t\t\t\t" << SSD << endl;
    cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

        totalMemoryInBytes << endl;
}
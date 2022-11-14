#include <iostream>
#include <string>
#include <Windows.h>

using std::wcin;
using std::wstring;
using std::wcout;
using std::endl;

void credit();

int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleOutputCP(CP_UTF8);

    int option;
    wcout << L"Вас вітає машина по видачі соціальних кредитів\n" << endl;
    wcout << L"Чи хочете ви взяти кредит?" << endl;
    wcout << L"1. Так" << endl;
    wcout << L"2. Ні\n" << endl;
    wcin >> option;

    switch (option)
    {
    case 1:
        system("cls");
        credit();
        break;
    case 2:
        wcout << L"Тоді бажаємо вам гарного дня!\n" << endl;
        break;
    }
}

int randomNumberi()
{
    srand((unsigned)time(0));
    int randomNumber = rand();
    return randomNumber;
}

void credit()
{
    int summ;
    int procent;
    int months;
    wstring id;
    wcout << L"Введіть суму кредиту(у грн.):\n";
    wcin >> summ;
    wcout << L"Введіть процент, під який будете брати кредит(без %):\n";
    wcin >> procent;
    wcout << L"Введіть к-ть місяців(1-36):\n";
    wcin >> months;
    wcout << L"Ваше прізвище, ім'я, по-батькові(На англ.):\n";
    wcin >> id;
    wcout << L"Ви хочете взяти кредит на суму: " << summ << L" грн, під " << procent << "%, " << L"на " << months << L" місяців. Усі данні задані корректно?" << endl;
    int option2;
    wcout << L"1. Так" << endl;
    wcout << L"2. Ні" << endl;
    wcin >> option2;

    switch (option2)
    {
    case 1:
        wcout << id << L", Ви " << randomNumberi() << L" у черзі на видачу кредиту, вітаємо!" << endl;
        break;
    case 2:
        wcout << L"Тоді введіть їх заново." << endl;
        system("pause");
        system("cls");
        credit();
    }
}
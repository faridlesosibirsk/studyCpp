﻿// lesson3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "swap.h"
#include <stdlib.h>

int ff = 0; // глобальная переменная

int main()
{
    // Динамическая память
    int* pp = (int*)malloc(10000*sizeof(int));
    pp = (int*)malloc(10 * sizeof(int)); // memory leak
    free(pp);

    // двумерный массив
    int N = 10;
    //int *M = (int*)malloc(sizeof(int)*N*N);//M[i][j]=M[i*N+j]
    int** M = (int**)malloc(N * sizeof(int*));//M[i][j]
    for (int i = 0; i < N; i++)
    {
        M[i] = (int*)malloc(N*sizeof(int*));
    }//M[i][j]=*(*(M+i)+j)
    //free(M);
    for (int j = 0; j < N; j++)
    {
        free(M[j]);
    }
    free(M);// Д/З
    // calloc M[i][j] = {0}
    // realloc 
    //int* rr = (int*)malloc(sizeof(int)*1000);
    //rr[0] = 10;
    //rr = realloc(rr, sizeof(int)*10000); ???
    int* rr = new int[1000];


    //a1 = 3; // a1 : необъявленный идентификатор

    //std::cout << "Hello World!\n";
    //int x = 10;
    //int y = 20;
    //swap(&x, &y);
    //swap(x, y);
    // print
    //std::cout << "x = " << x << std::endl;
    //std::cout << "y = " << y;
    //
    //int &n; // ошибка, ссылка должнабыть инициализированна
    //int &n = NULL; // ошибка, ссылка не может быть = NULL

    // & взять адрес переменной
    //int a = 5;
    //int* p = &a; // здесь

    // & когда ссылка заменяется на указатель
    // void swap(int &a, int &b) { // здесь

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

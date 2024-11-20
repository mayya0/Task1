#include <stdio.h>
#include <locale.h>
#include <math.h>

#define N 1000

double* full_elements(double *ptr_array, int n); /*заполнение массива значениями(например, из функции зад.2 лаб.8)*/
int put_elements(double *ptr_array, int n); /*печать элементов массива*/
double* calc_elements(double *ptr_array, int n, double constant); /*обработка элементов массива(см.инд.вариант  зад. 1.3 в работе 11)*/

double sum_elements(double *ptr_array, int begin, int end); /*функция вычисления суммы элементов массива  от индекса begin до индекса  end включительно*/
int find_element(double *ptr_array, int n, double element); /*функция поиска элемента равного а возвращающая индекс найденного элемента или -1, если такого элемента нет*/
double find_max_until_k(double* ptr_array, int n, int k); /*функция для поиска максимального значения элемента массива до позиции K включительно*/

int main()
{
    setlocale(LC_CTYPE, "RUS");
    task1();
}

int task1()
{
    double array[N];
    int size;
    printf("Введите размер массива > ");
    scanf("%d", &size);
    double constant = 3;

    
    /*функции для выполнения действий над элементами массива*/
    //обработка элементов массива и печать
    full_elements(array, size);
    put_elements(array, size);

    /*обращение для вывода результатов*/
    double sum = sum_elements(array, 0, size - 1);
    printf("Сумма элементов массива: %.2f\n", sum);

    double search_element;
    printf("Введите элемент для поиска > ");
    scanf("%lf", &search_element);

    int index = find_element(array, size, search_element);
    if (index != -1)
    {
        printf("Элемент %.2f найден по индексу %d\n", search_element, index);
    }
    else
    {
        printf("Элемент %.2f не найден\n", search_element);
    }

    int k = 3; 
    double max= find_max_until_k(array, size, k);
    if (max != -1) 
    {
        printf("Максимальное значение до позиции %d включительно: %.2f\n", k, max);
    }
}
double* full_elements(double* ptr_array, int n) /*заполнение массива значениями(например, из функции зад.2 лаб.8)*/
{
    for (int i = 0; i < n; i++)
    {
        double x = (double)i;
        ptr_array[i] = pow(x, 2) - pow(cos(x - 1), 2);
    }
    return ptr_array;
}

int put_elements(double* ptr_array, int n) /*печать элементов массива*/
{
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %.2f\n", i, ptr_array[i]);
    }
    return 0;
}

double* calc_elements(double* ptr_array, int n, double constant) /*обработка элементов массива(см.инд.вариант  зад. 1.3 в работе 11)*/
{
    for (int i = 0; i < n; i++)
    {
        ptr_array[i] -= constant;
    }
    return ptr_array;
}

double sum_elements(double* ptr_array, int begin, int end) /*функция вычисления суммы элементов массива  от индекса begin до индекса  end включительно*/
{
    double sum = 0.0;
    for (int i = begin; i <= end; i++)
    {
        sum += ptr_array[i];
    }
    return sum;
}

int find_element(double* ptr_array, int n, double element) /*функция поиска элемента равного а возвращающая индекс найденного элемента или -1, если такого элемента нет*/
{
    for (int i = 0; i < n; i++)
    {
        if (ptr_array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

double find_max_until_k(double* ptr_array, int n, int k) /*функция для поиска максимального значения элемента массива до позиции K включительно*/
{
    double max = ptr_array[0]; // максимальное значение первым элементом массива
    for (int i = 1; i <= k; i++) 
    {
        if (ptr_array[i] > max) /*больше ли текущий элемент ptr_array[i] текущего значения max*/
        {
            max = ptr_array[i]; // Обновляем max
        }
    }
    return max; 


}

#pragma once

/*
* @brief Ќайдите сумму всех чисел меньше value_, кратных multiples.
* @param value_: число меньше которого ищем сумму
* @param multiples_: массив кратных чисел
* @return сумма чисел
*/
unsigned long long int Problem_1(const int value_, const int* multiples_, const unsigned int size_);

/*
* @breaf Ќайти сумму всех четных элементов р€да ‘ибоначчи, которые не превышают четыре миллиона. 
* @param limit: число фибаначи, меньше котрого ищем сумму
* @return сумма чисел
*/
int Problem_2(int limit);

/*
* @breaf найти каков самый большой делитель числа 600851475143, €вл€ющийс€ простым числом? 
* @param num: число, дл€ которого ищем наибольший делитель
* @return наибольший делитель
*/
int Problem_3(long long num);

/*
* @breaf Ќайдите самый большой палиндром, полученный умножением двух трехзначных чисел.
* @return наибольший палиндром
*/
unsigned long long Problem_4(int num);

/*
* @breaf найти самое маленькое число делитс€ нацело на все числа от 1 до 20?
* @return наименьшее число которое делитс€ нацело на все числа от 1 до 20
*/
int Problem_5();
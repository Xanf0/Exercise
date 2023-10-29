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
* @param value_: число фибаначи, меньше котрого ищем сумму
* @return сумма чисел
*/
unsigned long long Problem_2(const unsigned int value_);

/*
* @breaf найти каков самый большой делитель числа 600851475143, €вл€ющийс€ простым числом? 
* @param num: число, дл€ которого ищем наибольший делитель
* @return наибольший делитель
*/
unsigned long long Problem_3(long long num);

/*
* @breaf Ќайдите самый большой палиндром, полученный умножением двух трехзначных чисел.
* @return наибольший палиндром
*/
unsigned long long Problem_4(int num);

/*
* @breaf найти самое маленькое число делитс€ нацело на все числа от 1 до 20?
* @return наименьшее число которое делитс€ нацело на все числа от 1 до 20
*/
unsigned long long Problem_5(const unsigned int value_);

#pragma once

/*
* @brief Найдите сумму всех чисел меньше value_, кратных multiples.
* @param value_: число меньше которого ищем сумму
* @param multiples_: массив кратных чисел
* @return сумма чисел
*/
unsigned long long int Problem_1(const int value_, const int* multiples_, const unsigned int size_);

/*
* @brief Найти сумму всех четных элементов ряда Фибоначчи, которые не превышают четыре миллиона. 
* @param value_: число фибаначи, меньше котрого ищем сумму
* @return сумма чисел
*/
unsigned long long Problem_2(const unsigned int value_);

/*
* @brief найти каков самый большой делитель числа 600851475143, являющийся простым числом? 
* @param num: число, для которого ищем наибольший делитель
* @return наибольший делитель
*/
unsigned long long Problem_3(long long num);

/*
* @brief Найдите самый большой палиндром, полученный умножением двух трехзначных чисел.
* @return наибольший палиндром
*/
unsigned long long Problem_4(int num);

/*
* @brief найти самое маленькое число делится нацело на все числа от 1 до 20?
* @return наименьшее число которое делится нацело на все числа от 1 до 20
*/
unsigned long long Problem_5(const unsigned int value_);

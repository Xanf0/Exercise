#pragma once
#define SIZE 4
/**
 * @brief √енерирует случайное число с указанным размером.
 * @param RandomNum: массив дл€ сохранени€ случайного числа
 */
int GenRandomNum(int RandomNum[SIZE]);
/*
 * @brief ѕодсчитывает количество совпадающих цифр на правильных позици€х.
 * @param RandomNum: массив с загаданным числом
 * @param guess: массив с предполагаемым числом
 * @return количество быков
 */
int Bulls(int RandomNum[SIZE], int guess[SIZE]);
/*
 * @brief ѕодсчитывает количество совпадающих цифр, не наход€щихс€ на правильных позици€х.
 * @param RandomNum: массив с загаданным числом
 * @param guess: массив с предполагаемым числом
 * @return количество коров
 */
int Cows(int RandomNum[SIZE], int guess[SIZE]);


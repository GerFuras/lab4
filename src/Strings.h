#pragma once

int slen(char str[]); //функция вычисления длины строки
int schr(char str[], char ch); //функция поиска символа в строке
int stok(char str[], char del, char *ptr[]); //функция разделения строки на части, *ptr[] - массив указателей на начало каждого токена
int sunstok(char str[], char delim, char *ptr[], int cnt); //функция соединения строки, *ptr[] - массив указателей на начало каждого токена
int scpy(char str_1[], char str_2[]); //функция копирования строки/токена
int scspn(char str[], char nsym[]); //функция проверки на недопустимые символы в строке
int scmp(char str_1[], char str_2[]); //функция сравнения строк по алфавиту
int chrtoint(char str[]); //функция преобразования числа из char в int
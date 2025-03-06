
#ifndef __7_3_LED_H
#define __7_3_LED_H
#include "stm32f1xx_it.h"
#include "stdbool.h"
#include "main.h"

#define A GPIO_PIN_10
#define B GPIO_PIN_6
#define C GPIO_PIN_4
#define D GPIO_PIN_2
#define E GPIO_PIN_1
#define G GPIO_PIN_5
#define F GPIO_PIN_9
#define DP GPIO_PIN_3

#define D7_1 GPIO_PIN_11
#define D7_2 GPIO_PIN_8
#define D7_3 GPIO_PIN_7

#define S1 GPIO_PIN_0
#define S2 GPIO_PIN_1
#define S3 GPIO_PIN_12
#define S4 GPIO_PIN_3
#define S5 GPIO_PIN_4
#define S6 GPIO_PIN_5
#define S7 GPIO_PIN_6
#define S8 GPIO_PIN_7
#define S9 GPIO_PIN_8
#define S10 GPIO_PIN_9
#define S11 GPIO_PIN_10
#define S12 GPIO_PIN_11

#define S_0_1 GPIO_PIN_13
#define S_0_2 GPIO_PIN_14
#define S_0_3 GPIO_PIN_15
#define S_0_4 GPIO_PIN_13

#define BUTTON_0 GPIO_PIN_0
#define BUTTON_1 GPIO_PIN_12
#define BUTTON_2 GPIO_PIN_15
#define BUTTON_3 GPIO_PIN_14
#define BUTTON_4 GPIO_PIN_15




extern const int InputTime;

void test(uint16_t delay); // самоконтроль
void set_number(int n);                         // вывод цифры
void set_dig(int n);                            // установка DIG
void set_n_dig(int dig1, int dig2, int dig3, int dig4); // установка DIG1,DIG2,DIG3
void print_number(int n); // печать числа


// Удалить
void TestBooton();

//------------------------------
void Test_4_LED(uint16_t delay);
void Test_12_LED(uint16_t delay);
//--------------------------------------------


//
////Объявляем функцию - Считает количество нажатий на кнопку( за условные 4 сек)
//
//int CountClicks();
//
////Объявляем функцию - Вывод минут и секунд 
//
//void PrintTimeMinutesSeconds(int minutes, int second);
//
////Объявляем функцию - Вывод часы и минуты 
//
//void PrintTimeHoursMinutes(int hours, int minutes);
//
////Объявляем функцию - Вывод месяц и день 
//
//void PrintTimeMonthDate(int mon, int date);



#endif /* __7_3_LED_H */



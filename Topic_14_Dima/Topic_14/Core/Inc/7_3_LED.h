
#ifndef __7_3_LED_H
#define __7_3_LED_H
#include "stm32f1xx_it.h"
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




// Глобально объявляем пременные для доступа их в всех подклюенных .h файлов и .c
extern uint64_t binaryNums;

extern uint8_t firstBit ;
extern uint8_t secondBit ;
extern uint8_t thirdBit ;
extern uint8_t fourthBit ;

extern uint8_t firstNum;
extern uint8_t secondBit;
extern uint8_t thirdBit;


void set_number(int n);                         // вывод цифры
void set_dig(int n);                            // установка DIG
void print_number(uint8_t *firstNum, uint8_t *secondNum, uint8_t *thirdNum);

//-------------------------------------------TEST-------------------------
void test(uint16_t delay); // самоконтроль
void Test_4_LED(uint16_t delay);
void Test_12_LED(uint16_t delay);
//---------------------------------------------------------------------

//Заменяем у бинарного числа последние 4 цифры в зависимости от нажатых кнопок
void SwapLast_4_Bit(uint64_t *binaryNums, uint8_t *firstBit, uint8_t *secondBit, uint8_t *thirdBit, uint8_t *fourthBit);

//Из числа переводим в битную последовательност		//(*)Передаем не число а указатель на место хранения числа 
void SetBinNumber(uint16_t *countNums, uint64_t *binaryNums);

//Перевод числа из 2-чного в 10-чный
uint16_t Binary_to_Hexadecimal(uint64_t *binaryNums);

//------------------------ Установка цвета для лампочек----------------- 

//Зажигание лампочек в зависемости от двоичного числа 
void Set_LED_12_Bit(uint64_t *binaryNums);
//Зажигание 1 лампочки при нажатие на BUTTON_1
void SetFirstBit(uint8_t *firstBit);
//Зажигание 2 лампочки при нажатие на BUTTON_2
void SetSeconsBit(uint8_t *secondBit);
//Зажигание 3 лампочки при нажатие на BUTTON_3
void SetThirdBit(uint8_t *thirdBit);
//Зажигание 4 лампочки при нажатие на BUTTON_4
void SetFourthBit(uint8_t *fourthBit);
//----------------------------------------------------------------------



#endif /* __7_3_LED_H */



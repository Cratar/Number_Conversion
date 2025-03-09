/**********************************************************************
*  7_3_LED.c
**********************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "7_3_LED.h"
#include "stm32f1xx_hal.h"

#ifndef __7_3_LED_ENABLED




//-------------------------------------------TEST-------------------------
//Самоиндикация 4 светодиодов 
void Test_4_LED(uint16_t delay)
{
	// 1 Лампачка 
	HAL_GPIO_WritePin(GPIOB, S_0_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, S_0_1 , GPIO_PIN_SET);
	HAL_Delay(delay);
	
	// 2 Лампачка 
	HAL_GPIO_WritePin(GPIOB, S_0_2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, S_0_2 , GPIO_PIN_SET);
	HAL_Delay(delay);
	
	// 3 Лампачка 
	HAL_GPIO_WritePin(GPIOB, S_0_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, S_0_3, GPIO_PIN_SET);
	HAL_Delay(delay);
	
	// 4 Лампачка 
	HAL_GPIO_WritePin(GPIOC, S_0_4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, S_0_4, GPIO_PIN_SET);
	HAL_Delay(delay);
	
	// Сброс света
	HAL_GPIO_WritePin(GPIOB, S_0_1| S_0_2| S_0_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC,  S_0_4, GPIO_PIN_RESET);

	HAL_Delay(delay);

}
//Самоиндикация 12 светодиодов 
void Test_12_LED(uint16_t delay)
{
    // 1 лампачка
	HAL_GPIO_WritePin(GPIOB, S1, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S1, GPIO_PIN_RESET);
	// 2 лампачка
	HAL_GPIO_WritePin(GPIOB, S2, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S2, GPIO_PIN_RESET);
	// 3 лампачка
	HAL_GPIO_WritePin(GPIOB, S3, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S3, GPIO_PIN_RESET);
	// 4 лампачка
	HAL_GPIO_WritePin(GPIOB, S4, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S4, GPIO_PIN_RESET);
	// 5 лампачка
	HAL_GPIO_WritePin(GPIOB, S5, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S5, GPIO_PIN_RESET);
	// 6 лампачка
	HAL_GPIO_WritePin(GPIOB, S6, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S6, GPIO_PIN_RESET);
	// 7 лампачка
	HAL_GPIO_WritePin(GPIOB, S7, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S7, GPIO_PIN_RESET);
	// 8 лампачка
	HAL_GPIO_WritePin(GPIOB, S8, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S8, GPIO_PIN_RESET);
	// 9 лампачка
	HAL_GPIO_WritePin(GPIOB, S9, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S9, GPIO_PIN_RESET);
	// 10 лампачка
	HAL_GPIO_WritePin(GPIOB, S10, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S10, GPIO_PIN_RESET);
	// 11 лампачка
	HAL_GPIO_WritePin(GPIOB, S11, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S11, GPIO_PIN_RESET);
	// 12 лампачка
	HAL_GPIO_WritePin(GPIOB, S12, GPIO_PIN_SET);
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOB, S12, GPIO_PIN_RESET);
	
}
//Самоиндикация экрана 
void test(uint16_t delay) {
	//----------------------------Общая проверка экрана------------------------------------------\\
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 |, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, D7_1, GPIO_PIN_RESET);
	
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | E | F | DP, GPIO_PIN_SET); // 0
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, B | C, GPIO_PIN_SET); // 1
	HAL_Delay(delay); //пауза
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET); // выкл
	HAL_GPIO_WritePin(GPIOA, A | B | G | E | D | DP, GPIO_PIN_SET); // 2
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | G | C | D | DP, GPIO_PIN_SET); // 3 
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, F | B | G | C, GPIO_PIN_SET); // 4
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | C | D | DP, GPIO_PIN_SET); // 5
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | E | C | D, GPIO_PIN_SET); // 6
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C  | DP, GPIO_PIN_SET); // 7
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F, GPIO_PIN_SET); // 8
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | F  | DP, GPIO_PIN_SET); // 9
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);


	
	//	//----------------------------DIG1------------------------------------------\\
	//
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, D7_1, GPIO_PIN_RESET);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | E | F, GPIO_PIN_SET); // 0
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, B | C, GPIO_PIN_SET); // 1
	HAL_Delay(delay); //пауза
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET); // выкл
	HAL_GPIO_WritePin(GPIOA, A | B | G | E | D, GPIO_PIN_SET); // 2
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | G | C | D, GPIO_PIN_SET); // 3 
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, F | B | G | C, GPIO_PIN_SET); // 4
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | C | D, GPIO_PIN_SET); // 5
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | E | C | D, GPIO_PIN_SET); // 6
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C, GPIO_PIN_SET); // 7
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F, GPIO_PIN_SET); // 8
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | F, GPIO_PIN_SET); // 9
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);

	
  
	////	//----------------------------DIG2------------------------------------------\\
	//
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, D7_2, GPIO_PIN_RESET);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | E | F, GPIO_PIN_SET); // 0
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, B | C, GPIO_PIN_SET); // 1
	HAL_Delay(delay); //пауза
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET); // выкл
	HAL_GPIO_WritePin(GPIOA, A | B | G | E | D, GPIO_PIN_SET); // 2
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | G | C | D, GPIO_PIN_SET); // 3 
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, F | B | G | C, GPIO_PIN_SET); // 4
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | C | D, GPIO_PIN_SET); // 5
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | E | C | D, GPIO_PIN_SET); // 6
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C, GPIO_PIN_SET); // 7
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F, GPIO_PIN_SET); // 8
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | F, GPIO_PIN_SET); // 9
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);

	
	//	//----------------------------DIG3------------------------------------------\\
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, D7_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, D7_3, GPIO_PIN_RESET);

	HAL_GPIO_WritePin(GPIOA, A | B | C | D | E | F, GPIO_PIN_SET); // 0
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, B | C, GPIO_PIN_SET); // 1
	HAL_Delay(delay); //пауза
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET); // выкл
	HAL_GPIO_WritePin(GPIOA, A | B | G | E | D, GPIO_PIN_SET); // 2
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | G | C | D, GPIO_PIN_SET); // 3 
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, F | B | G | C, GPIO_PIN_SET); // 4
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | C | D, GPIO_PIN_SET); // 5
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | F | G | E | C | D, GPIO_PIN_SET); // 6
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C, GPIO_PIN_SET); // 7
	HAL_Delay(delay);
  
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F, GPIO_PIN_SET); // 8
	HAL_Delay(delay);
  
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | F, GPIO_PIN_SET); // 9
	HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);

	
	//--------------------Выключаем все дисплеи и цифры-------------\\
	
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);



}
//-------------------------------------------------------------------------



//Заменяем у бинарного числа последние 4 цифры в зависимости от нажатых кнопок
void SwapLast_4_Bit(uint64_t *binaryNums, uint8_t *firstBit, uint8_t *secondBit, uint8_t *thirdBit, uint8_t *fourthBit)
{
	
	// Убираем последние 4 цифры
	*binaryNums /= 10000; 

	// Добавляем новые 4 цифры
	*binaryNums = (*binaryNums * 10000) + (*firstBit * 1000) + (*secondBit * 100) + (*thirdBit * 10) + *fourthBit;
}

//Из числа переводим в битную последовательност		//Передаем не число а указатель на место хранения числа 
void SetBinNumber(uint16_t countNums, uint64_t *binaryNums)
{
	uint64_t tempNumber = countNums;
	uint64_t multiplier = 1; // Множитель для формирования правильных разрядов (1, 10, 100...)
	*binaryNums = 0; // Обнуляем перед записью

	while (tempNumber > 0)  // Обрабатываем все биты
	{
		uint64_t bit = tempNumber & 1; // Берём младший бит
		*binaryNums += bit * multiplier; // Добавляем бит в нужный разряд
		multiplier *= 10; // Увеличиваем множитель (переход к следующему разряду)
		tempNumber >>= 1; // Сдвигаем число вправо
	}
}

//Перевод числа из 2-чного в 10-чный
uint16_t Binary_to_Decimal(uint64_t *binaryNums)
{ 
	uint64_t num = *binaryNums; 
	int dec_value = 0; 
  
	// Инициализируем базовое значение равным 1,
	int base = 1; 
  
	int temp = num; 
	// Извлечение последней цифры двоичного числа
	while (temp) { 
		int last_digit = temp % 10; 
		// Удаление последней цифры из двоичного числа
		temp = temp / 10; 
  
		// Умножаем последнюю цифру на базовое значение 
				// и добавляем ее к десятичному значению
		dec_value += last_digit * base; 
  
		// Обновление базового значения путем умножения его на 2
		base = base * 2; 
	} 
  
	// Возвращает десятичное значение
	return dec_value; 
} 


//------------------------ Установка цвета для лампочек-----------------

//Зажигание лампочек в зависемости от двоичного числа 
void Set_LED_12_Bit(uint64_t *binaryNums)
{
	uint16_t pins[] = { S1, S2, S3, S4, S5, S6, S7, S8, S9, S10, S11, S12 }; // GPIO пины для лампочек
	uint64_t tempNums = *binaryNums;
    
	for (int i = 11; i >= 0; --i) // Перебираем массив с конца
	{
		if (tempNums % 10 == 1) 
		{
			HAL_GPIO_WritePin(GPIOB, pins[i], GPIO_PIN_SET);
		} 
		else 
		{
			HAL_GPIO_WritePin(GPIOB, pins[i], GPIO_PIN_RESET);
		}
		tempNums /= 10; // Переход к следующей цифре

	}

}
//Зажигание 1 лампочки при нажатие на BUTTON_1
void SetFirstBit(uint8_t *firstBit)
{
	if (HAL_GPIO_ReadPin(GPIOA, BUTTON_1) == GPIO_PIN_RESET) // Проверяем нажатие кнопки
	{
		HAL_Delay(10);


		if (HAL_GPIO_ReadPin(GPIOA, BUTTON_1) == GPIO_PIN_RESET) // Проверяем повторно
		{
			// Инвертируем состояние
			if (*firstBit == 0)
			{
				*firstBit = 1;
				HAL_GPIO_WritePin(GPIOB, S_0_1, GPIO_PIN_SET);
			}
			else
			{
				*firstBit = 0;
				HAL_GPIO_WritePin(GPIOB, S_0_1, GPIO_PIN_RESET);
			}

			// Ждем отпускания кнопки
			while (HAL_GPIO_ReadPin(GPIOA, BUTTON_1) == GPIO_PIN_RESET)
			{
				HAL_Delay(10);
 
			}
		}
	}
}
//Зажигание 2 лампочки при нажатие на BUTTON_2
void SetSeconsBit(uint8_t *secondBit)
{
	if (HAL_GPIO_ReadPin(GPIOA, BUTTON_2) == GPIO_PIN_RESET) // Проверяем нажатие кнопки
	{
		HAL_Delay(10);


		if (HAL_GPIO_ReadPin(GPIOA, BUTTON_2) == GPIO_PIN_RESET) // Проверяем повторно
		{
			// Инвертируем состояние
			if (*secondBit == 0)
			{
				*secondBit = 1;
				HAL_GPIO_WritePin(GPIOB, S_0_2, GPIO_PIN_SET);
			}
			else
			{
				*secondBit = 0;
				HAL_GPIO_WritePin(GPIOB, S_0_2, GPIO_PIN_RESET);
			}

			// Ждем отпускания кнопки
			while (HAL_GPIO_ReadPin(GPIOA, BUTTON_2) == GPIO_PIN_RESET)
			{
				HAL_Delay(10);
 
			}
		}
	}
}
//Зажигание 3 лампочки при нажатие на BUTTON_3
void SetThirdBit(uint8_t *thirdBit)
{
	if (HAL_GPIO_ReadPin(GPIOC, BUTTON_3) == GPIO_PIN_RESET) // Проверяем нажатие кнопки
	{
		HAL_Delay(10);


		if (HAL_GPIO_ReadPin(GPIOC, BUTTON_3) == GPIO_PIN_RESET) // Проверяем повторно
		{
			// Инвертируем состояние
			if (*thirdBit == 0)
			{
				*thirdBit = 1;
				HAL_GPIO_WritePin(GPIOB, S_0_3, GPIO_PIN_SET);
			}
			else
			{
				*thirdBit = 0;
				HAL_GPIO_WritePin(GPIOB, S_0_3, GPIO_PIN_RESET);
			}

			// Ждем отпускания кнопки
			while (HAL_GPIO_ReadPin(GPIOC, BUTTON_3) == GPIO_PIN_RESET)
			{
				HAL_Delay(10);
 
			}
		}
	}
}
//Зажигание 4 лампочки при нажатие на BUTTON_4
void SetFourthBit(uint8_t *fourthBit)
{
	if (HAL_GPIO_ReadPin(GPIOC, BUTTON_4) == GPIO_PIN_RESET) // Проверяем нажатие кнопки
	{
		HAL_Delay(10);


		if (HAL_GPIO_ReadPin(GPIOC, BUTTON_4) == GPIO_PIN_RESET) // Проверяем повторно
		{
			// Инвертируем состояние
			if (*fourthBit == 0)
			{
				*fourthBit = 1;
				HAL_GPIO_WritePin(GPIOC, S_0_4, GPIO_PIN_SET);
			}
			else
			{
				*fourthBit = 0;
				HAL_GPIO_WritePin(GPIOC, S_0_4, GPIO_PIN_RESET);
			}

			// Ждем отпускания кнопки
			while (HAL_GPIO_ReadPin(GPIOC, BUTTON_4) == GPIO_PIN_RESET)
			{
				HAL_Delay(10);
 
			}
		}
	}
}

//----------------------------------------------------------------------

// В зависемости от числа зажигаются определенный набор сегментов на экране 
void set_number(int n){ 
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    if (n==0) 
    { 
    HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F , GPIO_PIN_SET);// 0
    }
    if (n==1)   
    { 
    HAL_GPIO_WritePin(GPIOA, B|C, GPIO_PIN_SET); // 1
    }
    if (n==2) 
    {
    HAL_GPIO_WritePin(GPIOA, A | B | G |E |D, GPIO_PIN_SET);// 2 
    }
    if (n==3)
    {
    HAL_GPIO_WritePin(GPIOA, A | B | G |C |D, GPIO_PIN_SET);// 3 
    }
    if (n==4)
    {
    HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4 
    }
    if (n==5)
    {
    HAL_GPIO_WritePin(GPIOA, A |F | G | C | D, GPIO_PIN_SET);// 5  
    }
    if (n==6)
    {
    HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6 
    }
    if (n==7)
    {
    HAL_GPIO_WritePin(GPIOA, A | B | C , GPIO_PIN_SET);// 7 
    }
    if (n==8)
    {
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
    }
    if (n==9)
    {
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F , GPIO_PIN_SET);// 9 
    }
}
// Устнановка индикации в определенную ячейку на экране 
void set_dig(int n) {
    HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 , GPIO_PIN_SET);
    if (n==1)
        HAL_GPIO_WritePin(GPIOA, D7_1 , GPIO_PIN_RESET);
    
    if (n==2)
        HAL_GPIO_WritePin(GPIOA, D7_2 , GPIO_PIN_RESET);
    
    if (n==3)
        HAL_GPIO_WritePin(GPIOA, D7_3 , GPIO_PIN_RESET);
	

}
// печать числа на экран 
void print_number(int n) {
  
	int  n1 = 0, n2 = 0, n3 = 0;
	n1 = n % 10; 
	
	n2 = (n / 10) % 10; 

	n3 = (n / 100) % 10;

    set_dig(1);
    set_number(n3);
	
    HAL_Delay(5);
	
    set_dig(2);
    set_number(n2);
	
    HAL_Delay(5);
	
    set_dig(3);
    set_number(n1);
	
    HAL_Delay(5);
	
} 


#endif /* __7_3_LED_ENABLED */
/*****************************************************  
* 7_3_LED.h
***************************************************  */



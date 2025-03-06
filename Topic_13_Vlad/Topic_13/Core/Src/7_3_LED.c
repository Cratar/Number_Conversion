/**********************************************************************
*  7_3_LED.c
**********************************************************************/
/* Includes ------------------------------------------------------------------*/
#include "7_3_LED.h"
#include "stm32f1xx_hal.h"

#ifndef __7_3_LED_ENABLED

// Временные функции удалить ---------------------------------
bool flag1 = false;
bool flag2 = false;
bool flag3 = false;
bool flag4 = false;
bool flag5 = false;

// Перебрать распиновку 
void TestBooton()
{

	// Читаем состояния кнопок
	flag1 = (HAL_GPIO_ReadPin(GPIOC, BUTTON_3) == GPIO_PIN_RESET);
	flag2 = (HAL_GPIO_ReadPin(GPIOC, BUTTON_4) == GPIO_PIN_RESET);
	flag3 = (HAL_GPIO_ReadPin(GPIOA, BUTTON_0) == GPIO_PIN_RESET);
	flag4 = (HAL_GPIO_ReadPin(GPIOA, BUTTON_1) == GPIO_PIN_RESET);
	flag5 = (HAL_GPIO_ReadPin(GPIOA, BUTTON_2) == GPIO_PIN_RESET);

	// Здесь можно выполнить действия, если все кнопки нажаты
	if (flag1 && flag2 && flag3 && flag4 && flag5)
	{
		// Например, включить светодиод или отправить сообщение
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_SET);
	}
	else
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, GPIO_PIN_RESET);
	}

	// Небольшая задержка для устранения дребезга
	HAL_Delay(50);
}


// Перебрать распиновку 
void Test_4_LED()
{
	HAL_GPIO_WritePin(GPIOB, S_0_1 | S_0_2 | S_0_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOC, S_0_4, GPIO_PIN_SET);
	HAL_Delay(50);
	  
	HAL_GPIO_WritePin(GPIOB, S_0_1 | S_0_2 | S_0_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOC, S_0_4, GPIO_PIN_RESET);
	HAL_Delay(50);
}

// Перебрать распиновку 
void Test_12_LED()
{
	HAL_GPIO_WritePin(GPIOB, S1 | S2 | S3 | S4 | S5 | S6 | S7 | S8 | S9 | S10 | S11 | S12 , GPIO_PIN_SET);
	HAL_Delay(50);
	
	  
	HAL_GPIO_WritePin(GPIOB, S1 | S2 | S3 | S4 | S5 | S6 | S7 | S8 | S9 | S10 | S11 | S12, GPIO_PIN_RESET);
	HAL_Delay(50);
}
//------------------------------------

void test(int delay){
	//----------------------------Общая проверка экрана------------------------------------------\\
    HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 |  , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, D7_1 , GPIO_PIN_RESET);
	
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F | DP , GPIO_PIN_SET);// 0
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, B | C , GPIO_PIN_SET); // 1
    HAL_Delay(delay);//пауза
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);// выкл
    HAL_GPIO_WritePin(GPIOA, A | B | G |E |D | DP, GPIO_PIN_SET);// 2
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | G |C |D | DP, GPIO_PIN_SET);// 3 
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A |F | G | C | D | DP, GPIO_PIN_SET);// 5
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6
    HAL_Delay(delay);
  
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C  | DP, GPIO_PIN_SET);// 7
    HAL_Delay(delay);
  
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F  | DP , GPIO_PIN_SET);// 9
    HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);


	
//	//----------------------------DIG1------------------------------------------\\
//
    HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, D7_1 , GPIO_PIN_RESET);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F , GPIO_PIN_SET);// 0
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, B|C, GPIO_PIN_SET); // 1
    HAL_Delay(delay);//пауза
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);// выкл
    HAL_GPIO_WritePin(GPIOA, A | B | G |E |D, GPIO_PIN_SET);// 2
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | G |C |D, GPIO_PIN_SET);// 3 
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A |F | G | C | D, GPIO_PIN_SET);// 5
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6
    HAL_Delay(delay);
  
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C , GPIO_PIN_SET);// 7
    HAL_Delay(delay);
  
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F , GPIO_PIN_SET);// 9
    HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);

	
  
////	//----------------------------DIG2------------------------------------------\\
//
    HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 , GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, D7_2, GPIO_PIN_RESET);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D|E | F , GPIO_PIN_SET);// 0
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, B|C, GPIO_PIN_SET); // 1
    HAL_Delay(delay);//пауза
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);// выкл
    HAL_GPIO_WritePin(GPIOA, A | B | G |E |D, GPIO_PIN_SET);// 2
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | G |C |D, GPIO_PIN_SET);// 3 
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, F| B | G |C, GPIO_PIN_SET);// 4
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A |F | G | C | D, GPIO_PIN_SET);// 5
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A |F | G | E | C | D, GPIO_PIN_SET);// 6
    HAL_Delay(delay);
  
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C , GPIO_PIN_SET);// 7
    HAL_Delay(delay);
  
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F , GPIO_PIN_SET);// 8
    HAL_Delay(delay);
  
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G |E | F | DP, GPIO_PIN_RESET);
    HAL_GPIO_WritePin(GPIOA, A | B | C | D| G | F , GPIO_PIN_SET);// 9
    HAL_Delay(delay);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);

	
//	//----------------------------DIG3------------------------------------------\\
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3  , GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, D7_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3  , GPIO_PIN_SET);
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
	
	HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 , GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);



}

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


void set_dig(int n) {
    HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 , GPIO_PIN_SET);
    if (n==1)
        HAL_GPIO_WritePin(GPIOA, D7_1 , GPIO_PIN_RESET);
    
    if (n==2)
        HAL_GPIO_WritePin(GPIOA, D7_2 , GPIO_PIN_RESET);
    
    if (n==3)
        HAL_GPIO_WritePin(GPIOA, D7_3 , GPIO_PIN_RESET);
	

}

void set_n_dig(int dig1, int dig2, int dig3, int dig4) {
	
	if (dig1 == 1) 
		HAL_GPIO_WritePin(GPIOA, D7_1, GPIO_PIN_RESET);
    else
        HAL_GPIO_WritePin(GPIOA, D7_1 , GPIO_PIN_SET);
      
    if (dig2==1)
        HAL_GPIO_WritePin(GPIOA, D7_2 , GPIO_PIN_RESET);
    else
        HAL_GPIO_WritePin(GPIOA, D7_2 , GPIO_PIN_SET);
      
    if (dig3==1)
        HAL_GPIO_WritePin(GPIOA, D7_3 , GPIO_PIN_RESET);
    else
        HAL_GPIO_WritePin(GPIOA, D7_3 , GPIO_PIN_SET);
	
  

}

// печать числа

void print_number(int n) {
  
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    n1=n%10;
    n2=(n/10)%10;
    n3=(n/100)%10;
    n4 = (n / 1000) % 10;

    set_dig(1);
    set_number(n4);
	
    HAL_Delay(5);
	
    set_dig(2);
    set_number(n3);
	
    HAL_Delay(5);
	
    set_dig(3);
    set_number(n2);
	
    HAL_Delay(5);
	
    set_dig(4);
    set_number(n1);
	
    HAL_Delay(5);
	
} 

//---------------New features---------\\



//const int InputTime = 4000000;
//
//// Считаме клики 
//int CountClicks()
//{
//	int i = 0;
//	int tap = 0;
//	while (i < InputTime)
//	{
//		if (HAL_GPIO_ReadPin(GPIOA, Pin_Booton) == 0) 
//		{
//			HAL_Delay(50); 
//
//			if (HAL_GPIO_ReadPin(GPIOA, Pin_Booton) == 0) 
//			{
//				tap++;
//
//				// Ждем отпускания кнопки что бы счетчик не наматывал километраж пока кнопка зажата
//				while (HAL_GPIO_ReadPin(GPIOA, Pin_Booton) == 0)
//				{
//					HAL_Delay(10);
//				}
//			}
//		}
//    
//		i++;
//	}
//	
//	return tap;
//	
//}


//Вывод минут и секунд 
//void PrintTimeMinutesSeconds(int min, int sec) {
//	minute = min;
//	second = sec;
//	
//	while (true)
//	{
//		set_dig(1);
//		set_number((minute / 10) % 10);
//		HAL_Delay(5);
//
//		
//		set_dig(2);
//		set_number(minute % 10);
//		HAL_GPIO_WritePin(GPIOA, DP, GPIO_PIN_SET);
//		HAL_Delay(5);
//
//		set_dig(3);
//		set_number((second / 10) % 10);
//		HAL_Delay(5);
//    
//		set_dig(4);
//		set_number(second % 10);
//		HAL_Delay(5);
//		
//		if (HAL_GPIO_ReadPin(GPIOA, Pin_Booton) == 0)
//		{
//			HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 | , GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
//		
//			break;
//		}
//	}
//	
//}
//
////Вывод часы и минуты 
//
//void PrintTimeHoursMinutes(int hours, int minutes)
//{
//	hour = hours;
//	minute = minutes;
//	
//	while (true)
//	{
//		set_dig(1);
//		set_number((hour / 10) % 10);
//		HAL_Delay(5);
//
//		
//		set_dig(2);
//		set_number(hour % 10);
//		HAL_GPIO_WritePin(GPIOA, DP, GPIO_PIN_SET);
//		HAL_Delay(5);
//
//		set_dig(3);
//		set_number((minute / 10) % 10);
//		HAL_Delay(5);
//    
//		set_dig(4);
//		set_number(minute % 10);
//		HAL_Delay(5);
//		
//		if (HAL_GPIO_ReadPin(GPIOA, Pin_Booton) == 0)
//		{
//			HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 | , GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
//		
//			break;
//		}
//	}
//}
//
//// Вывод месяц и день 
//
//void PrintTimeMonthDate(int mon, int date)
//{
//	month = mon;
//	day = date;
//	
//	while (true)
//	{
//		set_dig(1);
//		set_number((month / 10) % 10);
//		HAL_Delay(5);
//
//		
//		set_dig(2);
//		set_number(month % 10);
//		HAL_GPIO_WritePin(GPIOA, DP, GPIO_PIN_SET);
//		HAL_Delay(5);
//
//		set_dig(3);
//		set_number((day / 10) % 10);
//		HAL_Delay(5);
//    
//		set_dig(4);
//		set_number(day % 10);
//		HAL_Delay(5);
//		
//		if (HAL_GPIO_ReadPin(GPIOA, Pin_Booton) == 0)
//		{
//			HAL_GPIO_WritePin(GPIOA, D7_1 | D7_2 | D7_3 | , GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(GPIOA, A | B | C | D | G | E | F | DP, GPIO_PIN_RESET);
//		
//			break;
//		}
//	}
//}



#endif /* __7_3_LED_ENABLED */
/*****************************************************  
* 7_3_LED.h
***************************************************  */



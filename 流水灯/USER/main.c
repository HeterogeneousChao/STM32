/**
  ******************************************************************************
  * @file    main.c
  * @author  LXFY
  * @version V1.0 BUILD 150629
  * @brief   LED流水灯
  ******************************************************************************
  * @attention
  * GitHub  :https://github.com/luoxufeiyan/STM32
  * Blog    :http://www.luoxufeiyan.com
  *
  ******************************************************************************
  */
  
#include "stm32f10x.h"
#include "bsp_led.h"


void Delay(__IO uint32_t nCount)	 //简单的延时函数
{
	for(; nCount != 0; nCount--);
}

/**
  * @brief  主函数
  * @param  �
  * @retval �
  */
int main(void)
{	
	/* LED 端口初始化 */
	LED_GPIO_Config();	 
 
	/* 方法2，使用固件库控制IO */
	while (1)
	{
		LED1( ON );			  // 亮
		Delay(0x0FFFFF);
		LED1( OFF );		  // 灭

		LED2( ON );			  // 亮
		Delay(0x0FFFFF);
		LED2( OFF );		  // 灭

		LED3( ON );			  // 亮
		Delay(0x0FFFFF);
		LED3( OFF );		  // 灭	   
	}

}
/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2017 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define BLUETOOTH_UART_TX_Pin GPIO_PIN_2
#define BLUETOOTH_UART_TX_GPIO_Port GPIOA
#define BLUETOOTH_UART_RX_Pin GPIO_PIN_3
#define BLUETOOTH_UART_RX_GPIO_Port GPIOA
#define VIB_MAG_1_Pin GPIO_PIN_4
#define VIB_MAG_1_GPIO_Port GPIOA
#define VIB_MAG_2_Pin GPIO_PIN_5
#define VIB_MAG_2_GPIO_Port GPIOA
#define VIB_MAG_3_Pin GPIO_PIN_6
#define VIB_MAG_3_GPIO_Port GPIOA
#define VIB_MAG_4_Pin GPIO_PIN_7
#define VIB_MAG_4_GPIO_Port GPIOA
#define VIB_MAG_5_Pin GPIO_PIN_4
#define VIB_MAG_5_GPIO_Port GPIOC
#define VIB_MAG_6_Pin GPIO_PIN_5
#define VIB_MAG_6_GPIO_Port GPIOC
#define VIB_MAG_7_Pin GPIO_PIN_0
#define VIB_MAG_7_GPIO_Port GPIOB
#define VIB_MAG_8_Pin GPIO_PIN_1
#define VIB_MAG_8_GPIO_Port GPIOB
#define VIB_MAG_9_Pin GPIO_PIN_2
#define VIB_MAG_9_GPIO_Port GPIOB
#define VIB_MAG_10_Pin GPIO_PIN_10
#define VIB_MAG_10_GPIO_Port GPIOB
#define VIB_MAG_11_Pin GPIO_PIN_11
#define VIB_MAG_11_GPIO_Port GPIOB
#define VIB_MAG_12_Pin GPIO_PIN_12
#define VIB_MAG_12_GPIO_Port GPIOB
#define VIB_MAG_13_Pin GPIO_PIN_13
#define VIB_MAG_13_GPIO_Port GPIOB
#define VIB_MAG_14_Pin GPIO_PIN_14
#define VIB_MAG_14_GPIO_Port GPIOB
#define VIB_MAG_15_Pin GPIO_PIN_15
#define VIB_MAG_15_GPIO_Port GPIOB
#define VIB_MAG_16_Pin GPIO_PIN_6
#define VIB_MAG_16_GPIO_Port GPIOC
#define VIB_MAG_17_Pin GPIO_PIN_7
#define VIB_MAG_17_GPIO_Port GPIOC
#define VIB_MAG_18_Pin GPIO_PIN_8
#define VIB_MAG_18_GPIO_Port GPIOC
#define VIB_MAG_19_Pin GPIO_PIN_9
#define VIB_MAG_19_GPIO_Port GPIOC
#define VIB_MAG_20_Pin GPIO_PIN_8
#define VIB_MAG_20_GPIO_Port GPIOA
#define RS485_TX_Pin GPIO_PIN_9
#define RS485_TX_GPIO_Port GPIOA
#define RS485_RX_Pin GPIO_PIN_10
#define RS485_RX_GPIO_Port GPIOA
#define RS485_DE_Pin GPIO_PIN_11
#define RS485_DE_GPIO_Port GPIOA
#define VIB_MAG_21_Pin GPIO_PIN_12
#define VIB_MAG_21_GPIO_Port GPIOA
#define VIB_MAG_22_Pin GPIO_PIN_15
#define VIB_MAG_22_GPIO_Port GPIOA
#define VIB_MAG_23_Pin GPIO_PIN_10
#define VIB_MAG_23_GPIO_Port GPIOC
#define VIB_MAG_24_Pin GPIO_PIN_11
#define VIB_MAG_24_GPIO_Port GPIOC
#define VIB_MAG_25_Pin GPIO_PIN_12
#define VIB_MAG_25_GPIO_Port GPIOC
#define VIB_MAG_26_Pin GPIO_PIN_2
#define VIB_MAG_26_GPIO_Port GPIOD
#define VIB_MAG_27_Pin GPIO_PIN_3
#define VIB_MAG_27_GPIO_Port GPIOB
#define VIB_MAG_28_Pin GPIO_PIN_4
#define VIB_MAG_28_GPIO_Port GPIOB
#define VIB_MAG_29_Pin GPIO_PIN_5
#define VIB_MAG_29_GPIO_Port GPIOB
#define VIB_MAG_30_Pin GPIO_PIN_6
#define VIB_MAG_30_GPIO_Port GPIOB
#define VIB_MAG_31_Pin GPIO_PIN_7
#define VIB_MAG_31_GPIO_Port GPIOB
#define VIB_MAG_32_Pin GPIO_PIN_8
#define VIB_MAG_32_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

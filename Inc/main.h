/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2019 STMicroelectronics International N.V. 
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
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */
#ifdef __cplusplus
 extern "C" {
#endif

void systemResetToBootloader(void);
/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define VBAT_Pin GPIO_PIN_0
#define VBAT_GPIO_Port GPIOC
#define CURRENT_Pin GPIO_PIN_1
#define CURRENT_GPIO_Port GPIOC
#define AN_IN_Pin GPIO_PIN_2
#define AN_IN_GPIO_Port GPIOC
#define START_BUTTON_2_Pin GPIO_PIN_0
#define START_BUTTON_2_GPIO_Port GPIOA
#define START_BUTTON_1_Pin GPIO_PIN_2
#define START_BUTTON_1_GPIO_Port GPIOA
#define O1_Pin GPIO_PIN_3
#define O1_GPIO_Port GPIOA
#define MPU_CS_Pin GPIO_PIN_4
#define MPU_CS_GPIO_Port GPIOA
#define MPU_DRDY_Pin GPIO_PIN_4
#define MPU_DRDY_GPIO_Port GPIOC
#define MPU_DRDY_EXTI_IRQn EXTI4_IRQn
#define SDCARD_CS_Pin GPIO_PIN_11
#define SDCARD_CS_GPIO_Port GPIOE
#define SDCARD_CLK_Pin GPIO_PIN_12
#define SDCARD_CLK_GPIO_Port GPIOE
#define SDCARD_DO_Pin GPIO_PIN_13
#define SDCARD_DO_GPIO_Port GPIOE
#define SDCARD_CMD_Pin GPIO_PIN_14
#define SDCARD_CMD_GPIO_Port GPIOE
#define U3_RX_Pin GPIO_PIN_9
#define U3_RX_GPIO_Port GPIOD
#define ENC1_A_Pin GPIO_PIN_6
#define ENC1_A_GPIO_Port GPIOC
#define ENC1_B_Pin GPIO_PIN_7
#define ENC1_B_GPIO_Port GPIOC
#define VBUS_SENS_Pin GPIO_PIN_8
#define VBUS_SENS_GPIO_Port GPIOA
#define SDCARD_DETECT_Pin GPIO_PIN_3
#define SDCARD_DETECT_GPIO_Port GPIOD
#define LED_OUT_Pin GPIO_PIN_3
#define LED_OUT_GPIO_Port GPIOB
#define LED_OUT__Pin GPIO_PIN_4
#define LED_OUT__GPIO_Port GPIOB
#define START_BUTTON_11_Pin GPIO_PIN_5
#define START_BUTTON_11_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_6
#define LED_RED_GPIO_Port GPIOB
#define LED_BLUE_Pin GPIO_PIN_7
#define LED_BLUE_GPIO_Port GPIOB
#define START_BUTTON_21_Pin GPIO_PIN_9
#define START_BUTTON_21_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */
#ifdef __cplusplus
 }
#endif
/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

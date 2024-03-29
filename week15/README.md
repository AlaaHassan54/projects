
# Project Title:

Embedded C Baremetal Software Development on STM32F103C8
![image](https://github.com/AlaaHassan54/projects/assets/133440468/7fbe8b6a-b61c-4968-a89b-bdd3c61b87ef)


## overview:

 The project involves developing firmware for the STM32F103C8 microcontroller in Embedded C without using any operating system (bare-metal). The functionalities described in the provided video will be implemented using the microcontroller's peripherals such as GPIO, lcd, etc.


##  Reference


STM32F103C8T6 datasheet

https://www.st.com/resource/en/datasheet/stm32f103c8.pdf
## Drivers

lcd.h 

lcd.c

Stm32_F103C6_GPIO.C

Stm32_F103C6_GPIO.h

Stm32f103x6.h

main.c 

## Implementation

. **Startup File Creation**:

    - i have Created a startup file named (start_up.c) to define the initial stack pointer, reset vector, and interrupt vector table.
    - Define the Reset_Handler, which is the entry point of the program after reset.

. **Linker Script Creation**:

    - i have Writen a linker script named (linkerscript.ld) to specify the memory layout of the microcontroller.
    - Define memory regions such as FLASH (for program code), RAM, and any other relevant sections.
## Screenshots

![lcd_project](https://github.com/AlaaHassan54/projects/assets/133440468/b07088db-312e-41f5-9001-d4343ad4f175)



## Demo



https://github.com/AlaaHassan54/projects/assets/133440468/07588c39-593d-436c-a190-44dd5628d21d




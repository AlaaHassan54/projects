CC =arm-none-eabi-gcc
CFLAGS = -c -mcpu=$(ACH)  -std=gnu11 -mthumb
LDFLAGES= -T linkerscript.ld -nostdlib -Wl,-Map=executble.map
ACH =cortex-m4

main.o:main.c
	$(CC) $(CFLAGS) $^ -o $@
GPIO_Prog.o:GPIO_Prog.c
	$(CC) $(CFLAGS) $^ -o $@
RCC_Prog.o:RCC_Prog.c
	$(CC) $(CFLAGS) $^ -o $@
SysTick_Prog.o:SysTick_Prog.c
	$(CC) $(CFLAGS) $^ -o $@
start_up.o:start_up.c
	$(CC) $(CFLAGS) $^ -o $@
alaa.elf:main.o GPIO_Prog.o RCC_Prog.o SysTick_Prog.o start_up.o
	$(CC) $(LDFLAGES) $^ -o $@
all:main.o GPIO_Prog.o RCC_Prog.o SysTick_Prog.o start_up.o alaa.elf
Program:
	openocd -f board/st_nucleo_f4.cfg
clean:
	rm -rf *.o


CC =arm-none-eabi-gcc
CFLAGS = -c -mcpu=$(ACH)  -std=gnu11 -mthumb 
LDFLAGES= -T linkerscript.ld -nostdlib -Wl,-Map=executble.map 
ACH =cortex-m3

main.o:main.c
	$(CC) $(CFLAGS) $^ -o $@
lcd.o:lcd.c
	$(CC) $(CFLAGS) $^ -o $@
Stm32_F103C6_GPIO.o:Stm32_F103C6_GPIO.c
	$(CC) $(CFLAGS) $^ -o $@
start_up.o:start_up.c
	$(CC) $(CFLAGS) $^ -o $@
project.elf:main.o lcd.o Stm32_F103C6_GPIO.o start_up.o 
	$(CC) $(LDFLAGES) $^ -o $@
all:main.o lcd.o Stm32_F103C6_GPIO.o start_up.o project.elf
clean:
	rm -rf *.o
	rm -rf *.elf
	rm -rf *.map


compile:
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -c t.c -o t.o

clean:
	rm *.o 
	rm *.elf
analyze:
	cppcheck --enable=all *.c

debug:
	arm-none-eabi-gcc -g -c t.c -o t.elf
	
	



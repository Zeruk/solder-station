main.hex : main.c
	sdcc -mpic14 --use-non-free -p16f876a main.c
clean:
	rm main.o main.asm main.lst main.cod
    

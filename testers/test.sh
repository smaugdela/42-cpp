#!/bin/bash

./convert >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert "" >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert "a" >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert a b c >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 42 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 0 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert -42 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 2147483647 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert -2147483648 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 2147483648 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 42.0f >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert -42.56f >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 0.0000f >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert nanf >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert " +inff   	" >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert "		-inff" >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 21f >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 42.0 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert -42.56 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 0.0000 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert nan >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert " +inf   	" >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert "		-inf" >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
./convert 21 >> my_output.txt 2>>my_output.txt ; echo >> my_output.txt
# diff ref_output.txt my_output.txt
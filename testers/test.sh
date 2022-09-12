#!/bin/bash

./convert >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert "" >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert "a" >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert a b c >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 42 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 0 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert -42 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 2147483647 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert -2147483648 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 2147483648 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 42.0f >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert -42.56f >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 0.0000f >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert nanf >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert " +inff   	" >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert "		-inff" >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 21f >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 42.0 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert -42.56 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 0.0000 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert nan >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert " +inf   	" >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert "		-inf" >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
./convert 21 >> ref_output.txt 2>>ref_output.txt ; echo >> ref_output.txt
# diff ref_output.txt my_output.txt
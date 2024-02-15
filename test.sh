#!/bin/bash

./generer_rendu.sh
cp -rf printfTester rendu
echo "Test tripouille :\n"
cd rendu/printfTester 
make
make fclean
echo -e "\n=========Fin test tripouille========"
cd ../..
echo -e "\n______________________________\nTest Paulo-Santana"
cp -rf ft_printf_tester rendu
cd 
bash rendu/ft_printf_tester/test m
echo -e "\n=========Fin test Paulo========"
#rm -rf rendu/*
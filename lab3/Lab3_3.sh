echo "Enter two numbers"
read num1 num2
echo "select from following"
echo "1. Add"
echo "2. Sub"
echo "3. Mul"
echo "4. Div"
echo "5. Modulo"
echo "select your option"
read option

case $option in
	1)
	echo "you select 1. add"
	echo "addition of 2 number is"
	echo $num1+$num2 | bc ;; 
	
	2)
	echo "you select subtraction"
	echo "Subtraction of 2 number is"
	echo $num1-$num2 | bc ;;		
	
	3)
	echo "you select multiflication"
	echo "multiflication of 2 number is"
	echo $num1*$num2 | bc ;;	
	
	4)
	echo "you select division"
	echo "division of 2 number is"
	echo $num1/$num2 | bc ;; 

	5)
	echo "you select modul"
	echo $num1%$num2 | bc ;; 

	*)
	echo "Wrong option";;
	
	esac #To end the case 

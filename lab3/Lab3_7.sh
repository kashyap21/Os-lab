tmp=1
while [ $tmp -eq 1 ]
do
	echo "Enter a string:"
	read a
	case $a in

		"ja"
		echo "january";;

		"Jan")
		echo "January" ;;
		
		"Janu")
		echo "January" ;;
		
		"Janua")
		echo "January" ;;
		
		"January")
		echo "January" ;;
		
		*)
		echo "Can not understand" ;;
		
		esac

	echo " Do you want to continue [1/0] : "
	read b
	if [ $b -eq 1 ]
		then
		tmp=1
	else
		tmp=0
	fi
done

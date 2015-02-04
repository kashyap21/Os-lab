tmp=1
while [ $tmp = 1 ]
do
	echo "write the capital of gujarat"
	read a	
	if [ "$a" == 'gandhinagar' ]
		then
			echo 'Correct'
			tmp=0
	elif [ "$a" == 'GandhiNagar' ]
		then
			echo 'Correct'
			tmp=0
	elif [ "$a" == 'Gandhi Nagar' ]
		then
			echo 'correct'
			tmp = 0

	else 

			echo 'Wrong'
	fi
done
	
	


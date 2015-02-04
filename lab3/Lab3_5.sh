loop=1
while [ $loop -eq 1 ]
do
	echo "Enter a positive number less than 50"
	read a
	if [ $a -le 50 -a $a -gt 0 ]
		 then  
		 echo $a*$a | bc
	elif [ $a -gt 50 -o $a -lt 0 ] 
		 then 
		 echo "Please input less than 50  and a positive number"
	elif [ $a -eq 0 ]
		 then 
		 loop=0
	fi
done

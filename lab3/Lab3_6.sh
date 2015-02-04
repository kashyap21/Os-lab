cmd=1
while [ $cmd -eq 1 ]
do
	echo "Enter a command " 
	read cmd1
	$cmd1
	echo " Do you want to continue [1/0] : "
	read con
	if [ $con -eq 1 ]
		then
		cmd=1
	else
		cmd=0
	fi
done

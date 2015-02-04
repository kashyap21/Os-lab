echo "enter the number for fibonaci series" 
read nun
b=1
c=1
d=0
echo $b
echo $c	
while [ $num -ne 0 ]
do
	d=`expr $b + $c`
	b=$c
	c=$d
	echo $d
	num=`expr $num - 1`
done
		


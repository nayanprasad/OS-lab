echo "Enter a number"
read n
sum=0
while [ $n -ge 0 ]   # adding - before condition is important
do
	sum=$(($sum+$n))
	n=$(($n-1))
done	
echo $sum

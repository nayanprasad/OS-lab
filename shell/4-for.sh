echo "Enter a number"
read n
sum=0
for ((i=1; i<=$n; i++))   # here space is not a issue
do
	sum=$(($sum+$i))
done
echo $sum




#for i in {1..4}; do     1 - 4
#	sum=$(($sum+$i))
#done

#for i in {1..20..2}; do     1 - 20, last 2 show that increment value by 2
#	sum=$(($sum+$i))
#done

#for i in {1..20..2}          1 - 20, last 2 show that increment value by 2
#do     
#	sum=$(($sum+$i))
#done

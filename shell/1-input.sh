echo "hi"$1

#read N
#echo $N

#read N
#echo $N/2   print 4/2  as string

read N
#ans=$(($N/2))  
ans=$((N/2)) #space will throw error
echo $ans    # here we get 2


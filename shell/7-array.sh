echo enter the number of elements
read n
arr=()

echo -e "enter the elements\n"  # -e for using escape sequence
for ((i=0; i<n; i++))
do
	read a
	arr+=($a)
done 

#echo $arr  # wont work

#for element in "${arr[@]}"
#do
#	echo $element
#done


for ((i=0; i<n; i++))
do
	#echo "${arr[i]}" # as string
	echo ${arr[i]}    # as int
done

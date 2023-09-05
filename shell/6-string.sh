echo "Enter a string"
read str

echo ${#str}    # this will return the length of str

newStr=""

for ((i=0; i<=${#str}; i++))
do
	#echo "${str:i:1}"   # char at i the index. This will print the char from 
	#echo "${str:i:2}"   # i to i+2 char
	# char="${str:$i:1}"
	# char="a"
	# str="${str}${char}"

	remaing=$((${#str}-i))
	char="${str:remaing:1}"

	newStr="$newStr$char"

done 

# echo $str

echo $newStr

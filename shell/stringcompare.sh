echo "Enter first string"
read str1
echo "Enter second string"
read str2

concat="$str1$str2"
echo "$concat"

if [ $str1 == $str2 ]
then 
 	echo equal
else 
	echo noqeual
fi

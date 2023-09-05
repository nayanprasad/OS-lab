read str
n=${#str}

c1=0
c2=0

for ((i=0; i<n; i++))
do
	char="${str:i:1}"
	
	if [[ "$char" =~ [a-z] ]]
	then 
		if [[ "$char" =~ [aeiou] ]]
		then
			c1=$((c1+1))
		else
			c2=$((c2+1))
		fi
	fi
done

echo "vowels $c1"
echo "consonet $c2"

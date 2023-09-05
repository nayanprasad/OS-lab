echo "Enter the age"
read age
if [ $age -ge 50 ]; then   # there should be sapce after []  -gt, -lt
	echo "You are dead"
elif [ $age -ge 18 ]; then
	echo "You fucked"
else 
	echo "You sucked"
fi


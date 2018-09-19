for i in {1..5}
do
	numbers=$(tail -n 1 file.txt)
	echo "$(($numbers +1))" >> file.txt
done


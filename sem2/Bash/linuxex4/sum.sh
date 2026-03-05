echo "enter the size(N):"
read N
i=1
sum=0
echo "enter the N numbers: "
while [ $i -le $N ]
do
   read num
   sum=$((sum+num))
   i=$((i+1))
done
echo "sum of n numbers is : $sum"

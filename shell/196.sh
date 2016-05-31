#!/bin/bash
index=1
for i in `head $1 -n +1`
do
#cat a | awk  '{print '$index'}'
#cat a | awk  '{print $i }' | xargs echo -n
#echo $i
cat $1 | awk  '{print $'$index' }'  | xargs echo -n
((index++));
echo ''
done
#echo $index
#echo index
:<<!
let "num = $index/$#";
echo $num
echo 'kkk'
for(( point=1;point<=$num;point++ ))
    do
        #echo $point
        echo ''
    for((key=1;key<=$num;key++))
    do
        for((p=1;p<=$#;p++))
            do
                let "re = $p*$point+$key"
                echo $re
                echo "re"
            done
        echo $key
    done

done
!
#if [$index -le $#] then echo $index

cat file.txt |awk '{for(i=1;i<=NF;++i) { arr[i] = arr[i] $i " "; }} END { for (i=1;i<=NF;++i) print substr(arr[i], 0, length(arr[i])-1)}'

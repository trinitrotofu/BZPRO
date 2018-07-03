#!/bin/bash

bgn=1000
pid=$bgn
top=5411
path="https://www.lydsy.com/JudgeOnline/problem.php?id="

while [ $pid -le $top ]; do
	echo "------------Getting Problem:$pid------------"
	wget -p -np -k --reject=logo.png,hoj.css,background.jpg --load-cookies="./cookies.txt" $path$pid
	mv ./www.lydsy.com/JudgeOnline/problem.php?id=$pid ./www.lydsy.com/JudgeOnline/$pid.html
	echo $pid"Done."
	let pid=pid+1
	sleep 0.1
done

echo "Problem Get Success!"

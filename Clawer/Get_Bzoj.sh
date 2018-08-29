#!/bin/bash

read bgn <./bgn.txt
read top <./top.txt
pid=$bgn
path="https://www.lydsy.com/JudgeOnline/problem.php?id="

while [ $pid -le $top ]; do
	echo "------------Getting Problem:$pid------------"
	wget -m -k -A="problem.php?id="$pid",problem.php?id="$pid".tmp,problem.php?id="$pid".tmp.html,png,jpg,gif,webp,bmp,pdf,rar,zip,7z,txt,doc,docx,ppt,pptx" --reject="logo.png" --load-cookies="./cookies.txt" $path$pid
	mv "./www.lydsy.com/JudgeOnline/problem.php?id="$pid".tmp" "./www.lydsy.com/JudgeOnline/"$pid".html"
	echo $pid"Done."
	let pid=pid+1
	sleep 0.3
done

echo "Problem Get Success!"

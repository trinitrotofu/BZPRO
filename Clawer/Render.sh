#!/bin/bash

bgn=1000
pid=$bgn
top=5411
path="./www.lydsy.com"

echo "Backing up original file..."

cp $path $path"_bak" -r

echo "done."

rm -rf $path/JudgeOnline/include
rm -rf $path/JudgeOnline/image
cp ./Semantic $path/ -r
cp ./image $path/ -r

echo "Making Index..."

while read str
do
	echo $str >>./www.lydsy.com/index.html
done <./index_head.html

g++ -o ./Get_Title ./Get_Title.cpp -O2

while [ $pid -le $top ]; do
	echo "Adding #"$pid"..."
	./Get_Title $pid >./tmp.txt
	read str <./tmp.txt
	echo "<tr><td><a href=\"./JudgeOnline/"$pid".html\">"$pid"</a></td><td>"$str"</td></tr>" >>$path"/index.html"
	let pid=pid+1
done

rm ./Get_Title
rm ./tmp.txt

while read str
do
	echo $str >>$path"/index.html"
done <./index_foot.html

echo "done."
echo "Rendering problems..."

g++ -o ./Render_Pro ./Render_Pro.cpp -O2

pid=$bgn

while [ $pid -le $top ]; do
	echo "Rendering #"$pid"..."
	./Render_Pro <$path/JudgeOnline/$pid.html >./tmp.html
	rm $path/JudgeOnline/$pid.html
	mv ./tmp.html $path/JudgeOnline/$pid.html
	let pid=pid+1
done

rm ./Render_Pro

echo "done."
echo "Rendering success!"

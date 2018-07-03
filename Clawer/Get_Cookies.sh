echo "请输入bzoj用户名："
read user_id

echo "请输入bzoj密码："
stty -echo
read password
stty echo

wget --post-data="user_id=$user_id&password=$password" --save-cookies="./cookies.txt" --keep-session-cookies "https://www.lydsy.com/JudgeOnline/login.php"

rm ./login.php

echo "Cookie Get Success!"

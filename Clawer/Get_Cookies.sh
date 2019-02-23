echo "Get cookies of BZOJ"

echo "User name:"
read user_id

echo "Password:"
stty -echo
read password
stty echo

wget --post-data="user_id=$user_id&password=$password" --save-cookies="./cookies.txt" --keep-session-cookies "https://www.lydsy.com/JudgeOnline/login.php"

rm ./login.php

echo "Cookie download completed!"

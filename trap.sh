#! /bin/sh 

trap 'rm -f /tmp/my_tmp_file_$$' INT
echo creating file /temp/my_tmp_file_$$
date > /temp/my_tmp_file_$$

echo "press interrupt (CTRL-C) to interrupt ... "
while [ -f /tmp/my_tmp_file_$$ ]; do
    echo File exists
    sleep 1
done
echo The file no longer exists

trap INT
echo creating file /tmp/my_tmp_file_$$
date > /tmp/my_tmp_file_$$

echo "press interrupt (control -c ) to interrupt ...."
while [ -f /tmp/my_tmp_file_$$ ]; do
    echo File exists
    sleep 1
done

echo we never get here
exit 0

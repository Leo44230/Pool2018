#!/bin/bash

res="$(ifconfig | grep inet | grep -v "127.0.0.1" | grep -v "inet6" | cut -f 2 -d ' ' )"
if [[ $res == "" ]]
then	
	echo "I am lost!"
else
	echo $res
fi

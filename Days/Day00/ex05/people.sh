ldapsearch "(cn="z*")" | grep "^cn" | cut -c 5- | sort -rf

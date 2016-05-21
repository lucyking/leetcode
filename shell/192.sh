# Read from the file words.txt and output the word frequency list to stdout.

# wrong
#sed 's/\\n/ /g' words.txt | fmt -w 1 | sort  | uniq -c | sort -k1 -h -r | awk  '{print $2" "$1}'

cat words.txt |xargs echo | sed 's/\\n/ /g'  | fmt -w 1 | sort  | uniq -c | sort -k1 -h -r | awk  '{print $2" "$1}'

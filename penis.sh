for f in *.c
do
    x=${f%%.*}
    gcc $f -o $x
done
